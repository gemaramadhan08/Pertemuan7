#include<iostream>
using namespace std;

long fibonacci(long n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int x;

    cout << "Masukkan nilai fibonacci" << endl;
    cout << "Masukkan nilai x: "; cin >> x;
    cout << "Nilai fibonacci dari " << x << " = " << fibonacci(x) << endl;
}