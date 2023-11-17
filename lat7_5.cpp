//ngide
#include<iostream>
using namespace std;

int kali(int x, int y, int z);
int tambah(int x, int y, int z);

int main(){
    int x, y, z;

    cout << "Masukkan bilangan pertama: "; cin >> x;
    cout << "Masukkan bilangan kedua: "; cin >> y;
    cout << "Masukkan bilangan ketiga: "; cin >> z;

    cout << "\nHasil perkalian bilangan itu adalah: " << kali(x, y, z) << endl;
    cout << "Hasil pertambahan bilangan itu adalah: " << tambah(x, y, z) << endl;

    return 0;
}

int kali(int x, int y, int z){
    return x * y * z;
}

int tambah(int x, int y, int z){
    return x + y + z;
}