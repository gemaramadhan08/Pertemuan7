#include<iostream>
using namespace std;

void ganjil();
void genap();

void ganjil(){
    int x;

    cout << "Ganjil ";
    for(int x = 0; x <= 25; x += 2){
        cout << x << " ";
    }
}

void genap(){
    int y;

    cout << "\nGenap ";
    for(int y = 1; y <= 26; y += 2){
        cout << y << " ";
    }
}

int main(){
    ganjil();
    genap();


}