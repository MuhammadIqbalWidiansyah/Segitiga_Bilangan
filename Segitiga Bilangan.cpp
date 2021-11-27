//karena menggunakan cin, cout, dan for loop
#include <iostream>

//untuk mempersingkat penulisan
using namespace std;

//fungsi utama
int main() {
    
    //deklarasi variabel baris
    int baris;
    
    //untuk menginput jumlah baris
    cin >> baris;
    
    for (int i = baris; i >= 1; --i)
    {
        //untuk menghentikan program jika angka yang dimasukkan >= 10
        if (baris >= 10)
        {
            break;
        }

        //untuk menghentikan program jika angka yang dimasukkan <= 0
        else if (baris <= 0)
        {
            break;
        }

        //output segitiga bilangan
        for (int j = 1; j <= i; ++j)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    //output jika angka yang dimasukkan diluar jangkauan
    if (baris >= 10)
    {
        cout << "Bilangan tidak sesuai!" << endl;
    }
    else if (baris <= 0)
    {
        cout << "Bilangan tidak sesuai!" << endl;
    }

    //agar program berakhir dengan nilai 0
    return 0;
}