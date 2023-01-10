#include<iostream>
#include<stdlib.h>

using namespace std;

struct Barang{
    int idBarang;
    string namaBarang;
    int stok;
    long harga;
    
    Barang *next;
};

Barang *newData, *head = NULL, *top = NULL, *current;



void buatList(Barang *dataBarang){
    head = dataBarang;
    top = dataBarang;
}

bool isEmpty(){
    if(head == NULL){
        return true;
    }
    else{
        return false;
    }
}

bool isSingleNode(){
    if(head->next == NULL){
        return true;
    }
    else{
        return false;
    }
}

void cetak(){
    if(isEmpty()){
        cout<<"List masih kosong"<<endl;
    }
    else{
        system("CLS");
        cout<<"Data Barang :"<<endl;
        cout<<"-------------"<<endl;
        current  = head;
        int i = 1;
        while(current!=NULL){
            cout<<"Barang ke-"<<i<<endl;
            cout<<"Id Barang: "<<current->idBarang<<endl;
            cout<<"Nama Barang: "<<current->namaBarang<<endl;
            cout<<"Stok: "<<current->stok<<endl;
            cout<<"Harga: Rp "<<current->harga<<",00"<<endl;

            current = current->next;
            i++;
        }
    }
}

void tambahBelakang(Barang *dataBarang){
    if(isEmpty()){
        buatList(dataBarang);
    }
    else{
        top->next = dataBarang;
        top = dataBarang;
    }
}


void hapusBelakang(){
    if(isEmpty()){
        cout<<"Tidak dapat menghapus top karena list masih kosong"<<endl;
    }
    else{
        if(isSingleNode()){
            head = NULL;
        }
        else{
            Barang *hapus, *current;
            current = head;
            while(current->next!=top){
                current = current->next;
            }

            hapus = top;
            top = current;
            current->next = NULL;
            delete hapus;
        }
        cout<<"Berhasil menghapus top"<<endl;

    }
}
int panjang ()
{
    int count=0;
    if (!isEmpty())
    {
        count=1;
        Barang *bantu;
        bantu=head;
        if (bantu->next==NULL)
        {
            count=1;
        }
        else
        {
            do
            {
                count++;
                bantu=bantu->next;
            }
            while (bantu->next!=NULL);
        }
    }
    else
    {
        count=0;
    }
    return count;
}
void tambahStok(int data)
{
    Barang *cari = new Barang;
    cari = head;
    if (head == NULL)
    {
        cout << "data kosong" << endl;
    }
    else
    {
        while (cari->idBarang != data)
        {
            cari = cari->next;
        }
        cout << cari->namaBarang;
        cout<<"  ditemukan" << endl;
       
        int tambah;
        cin >> tambah;
        cari->stok = cari->stok + tambah;
    }
             cout<<"Id Barang: "<<cari->idBarang<<endl;
            cout<<"Nama Barang: "<<cari->namaBarang<<endl;
            cout<<"Stok: "<<cari->stok<<endl;
            cout<<"Harga: Rp "<<cari->harga<<",00"<<endl;
    
}

void kurangStok(int data)
{
    Barang *cari = new Barang;
    cari = head;
    if (head == NULL)
    {
        cout << "data kosong" << endl;
    }
    else
    {
        while (cari->idBarang != data)
        {
            cari = cari->next;
        }
        cout << cari->namaBarang;
        cout<<"  ditemukan" << endl;
        
        int kurang;
        cin >> kurang;
        cari->stok = cari->stok - kurang;
    }
            cout<<"Id Barang: "<<cari->idBarang<<endl;
            cout<<"Nama Barang: "<<cari->namaBarang<<endl;
            cout<<"Stok: "<<cari->stok<<endl;
            cout<<"Harga: Rp "<<cari->harga<<",00"<<endl;
}


Barang *inputData()
{
    newData = new Barang();
    cout<<"Id barang: ";
    cin>>newData->idBarang;
    cout<<"Nama barang: ";
    cin>>newData->namaBarang;
    cout<<"Stok: ";
    cin>>newData->stok;
    cout<<"Harga: Rp ";
    cin>>newData->harga;
    newData->next = NULL;
    return newData;
}

void aksi(int pilih){
    Barang *inputan;
    int posisi, data;
    switch(pilih){
        case 0 : cout<<"Terima kasih"<<endl;exit(0);
        case 1 : system("CLS"); 
                cout<<"Push Data"<<endl;
                inputan = inputData();
                tambahBelakang(inputan);break;
        case 2 : system("CLS");
                cout<<"Pop Data"<<endl;
                hapusBelakang();break;
        case 3 : cetak();break;
        case 4 : cout<<"Jumlah data barang: xx";
                    cout<<panjang()<<endl;break;
        case 5 : cout<<"Masukkan id barang: ";
                cin>>data;
                tambahStok(data);
                break;
        case 6 : cout<<"Masukkan id barang: ";
                cin>>data;
                kurangStok(data);break;
        default: cout<<"Pilihan "<<pilih<<" belum tersedia"<<endl;
                exit(0);break;
    }
}


int main(){
    int pilih;
    do {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Cetak Stack"<<endl;
        cout<<"4. Jumlah Data"<<endl;
        cout<<"5. Tambah Stok Barang"<<endl;
        cout<<"6. Kurangi Stok Barang"<<endl;
        cout<<"0. Keluar Program"<<endl;
        cout<<"Masukkan pilihan : ";
        cin>>pilih;
        aksi(pilih);
    }
    while(pilih!=0);
    return 0;
}