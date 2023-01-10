#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct pemain
{
    string nama_pemain;
    int skor;
    pemain *lanjut;
};
pemain *kepala = NULL;
pemain *ekor = NULL;
int top = 0;
int space;

bool jika_kosong()
{
    if (space == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool jika_penuh()
{
    int maks = 10;
    if (space == maks)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void inputPemainBaru()
{
    if (jika_penuh() == true)
    {
        cout << "List pemain penuh" << endl;
    }
    else
    {
        pemain *baru, *bantu;
        baru = new pemain;
        // jika nama pemain baru ada yang sama maka nama tidak bisa diinput, jika tidak ada yang sama maka nama dan skor bisa diinput
        cout << "Masukkan Nama Pemain : ";
        cin >> baru->nama_pemain;
        bantu = kepala;
        while (bantu != NULL)
        {
            if (bantu->nama_pemain == baru->nama_pemain)
            {
                cout << "Nama pemain sudah ada" << endl;
                return;
            }
            bantu = bantu->lanjut;
        }
        cout << "Masukkan Skor Pemain : ";
        cin >> baru->skor;
        baru->lanjut = NULL;
        if (jika_kosong() == true)
        {
            kepala = baru;
            ekor = baru;
            ekor->lanjut = NULL;
        }
        else
        {
            ekor->lanjut = baru;
            ekor = baru;
            ekor->lanjut = NULL;
        }
        cout << "Pemain baru berhasil ditambahkan" << endl;
        space++;
    }
}

void updateSkorPemain()
{
    string nama;
    int skor;

    if (jika_kosong() == true)
    {
        cout << "List pemain kosong" << endl;
    }
    else
    {
        pemain *bantu;
        bantu = kepala;
        cout << "Masukkan Nama Pemain : ";
        cin >> nama;
        while (bantu != NULL)
        {
            if (bantu->nama_pemain == nama)
            {
                cout << "Pemain ditemukan, silakan diupdate" << endl;
                cout << endl;
                cout << "Masukkan Skor Pemain : ";
                cin >> skor;
                bantu->skor = skor;
                cout << "Skor pemain berhasil diupdate" << endl;
                return;
            }
            bantu = bantu->lanjut;
        }
        cout << "Nama pemain tidak ditemukan" << endl;
    }
}

void tampilLimaTerbaik()
{
    // mengurutkan skor dari yang terbesar ke yang terkecil, kemudian menampilkan 5 skor terbesar
    pemain *bantu;
    pemain *bantu2;

    bantu = kepala;
    bantu2 = kepala;

    cout << "Leaderboard" << endl;

    if (jika_kosong() == true)
    {
        cout << "List pemain kosong" << endl;
    }
    else
    {
        // menukar nama pemain dan skor pemain, kemuadian menampilkan 5 pemain dengan skor terbesar

        while (bantu != NULL)
        {
            while (bantu2 != NULL)
            {
                if (bantu->skor > bantu2->skor)
                {
                    string tempNama = bantu->nama_pemain;
                    int tempSkor = bantu->skor;
                    bantu->nama_pemain = bantu2->nama_pemain;
                    bantu->skor = bantu2->skor;
                    bantu2->nama_pemain = tempNama;
                    bantu2->skor = tempSkor;
                }
                bantu2 = bantu2->lanjut;
            }
            bantu = bantu->lanjut;
            bantu2 = kepala;
        }
        bantu = kepala;
        int i = 0;
        while (bantu != NULL && i < 5)
        {
            cout << i + 1 << ". " << bantu->nama_pemain << " " << bantu->skor << endl;
            bantu = bantu->lanjut;
            i++;
        }
    }
}

void tampilSeluruhPemain()
{
    pemain *bantu;
    bantu = kepala;
    if (jika_kosong() == true)
    {
        cout << "List pemain kosong" << endl;
    }
    else
    {
        int angka = 0;
        while (bantu != NULL)
        {
            cout << angka + 1 << ". " << bantu->nama_pemain << " " << bantu->skor << endl;
            bantu = bantu->lanjut;
            angka++;
        }
    }
}

void hapusPemain()
{
    // menghapus pemain terakhir
    pemain *hapus, *bantu;
    hapus = ekor;
    if (jika_kosong() == true)
    {
        cout << "List pemain kosong" << endl;
    }
    else
    {
        if (kepala == ekor)
        {
            kepala = NULL;
            ekor = NULL;
        }
        else
        {
            bantu = kepala;
            while (bantu->lanjut != ekor)
            {
                bantu = bantu->lanjut;
            }
            bantu->lanjut = NULL;
            ekor = bantu;
        }
        cout << "Pemain dengan skor terendah berhasil dihapus" << endl;
        delete hapus;
        space--;
    }
}

int main()
{
    int pilihan;
    do
    {
        system("cls");
        tampilLimaTerbaik();
        cout << endl
             << endl;
        cout << "1. Tambah Pemain" << endl;
        cout << "2. Update Skor Pemain" << endl;
        cout << "3. Tampil Lima Terbaik" << endl;
        cout << "4. Tampil Seluruh Pemain" << endl;
        cout << "5. Hapus Pemain" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            inputPemainBaru();
            getch();
            break;
        case 2:
            updateSkorPemain();
            getch();
            break;
        case 3:
            tampilLimaTerbaik();
            getch();
            break;
        case 4:
            tampilSeluruhPemain();
            getch();
            break;
        case 5:
            hapusPemain();
            getch();
            break;
        case 6:
            cout << "Terima Kasih" << endl;
            getch();
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
            getch();
            break;
        }
    } while (pilihan != 6);
    return 0;
}