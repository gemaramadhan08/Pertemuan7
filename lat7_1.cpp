#include<iostream>
using namespace std;

int factorial(int n){

    if(n == 1){
        return(1);
    }else{
        return(n * factorial(n - 1));
    }

}

int main(){
    int x;

    cout << "Mencari faktorial\n" << endl;
    cout << "Masukkan nilai x: "; cin >> x;
    cout << "Nilai factorial dari " << x << " = " << factorial(x);

    return 0;
}