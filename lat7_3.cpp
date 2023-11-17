#include<iostream>
using namespace std;

void tukar(int x, int y);

int main(){
    int a, b;
    a = 99;
    b = 11; 

    cout << "Nilai sebelum pemanggilan fungsi" << endl;
    cout << "Nilai a = " << a << " Nilai b = " << b << endl;
    tukar(a,b);
    cout << "Nilai sesudah pemanggilan fungsi: " << endl;
    cout << "Nilai a = " << a << " Nilai b = " << b << endl;
}

void tukar(int px, int py){
    int z;
    z = px;
    px = py;
    py = z;

    cout << "Nilai akhir fungsi" << endl;
    cout << "Nilai px = " << px << " Nilai py = " << py << endl;
}
