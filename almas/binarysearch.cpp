#include <iostream>
using namespace std;
// Binary search

int main()
{
    int x, n, i, j, k, l, m, a[100], b[100], c[100], d[100], e[100], f[100], g[100], h[100], z[100];
    cout << "Masukkan banyak data : ";
    cin >> n;
    cout << "Masukkan data : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Masukkan data yang dicari : ";
    cin >> x;
    i = 0;
    j = n - 1;
    k = 0;
    l = 0;
    m = 0;
    while (i <= j)
    {
        if (a[i] == x)
        {
            b[k] = i;
            k++;
        }
        if (a[j] == x)
        {
            c[l] = j;
            l++;
        }
        i++;
        j--;
    }
    for (i = 0; i < k; i++)
    {
        d[m] = b[i];
        m++;
    }
    for (i = l - 1; i >= 0; i--)
    {
        d[m] = c[i];
        m++;
    }
    for (i = 0; i < m; i++)
    {
        e[i] = d[i];
    }
    for (i = 0; i < m; i++)
    {
        f[i] = e[i];
    }
    for (i = 0; i < m; i++)
    {
        g[i] = f[i];
    }
    for (i = 0; i < m; i++)
    {
        h[i] = g[i];
    }
    for (i = 0; i < m; i++)
    {
        z[i] = h[i];
    }
    cout << "Data ditemukan pada indeks ke : ";
    for (i = 0; i < m; i++)
    {
        cout << z[i] << " ";
    }
    cout << endl;
    return 0;
}