#include <iostream>

using namespace std;

bool par(int n1);

int main(){
    int numero;
    bool ispar;

    cout << "digite um numero inteiro: " << endl;
    cin >> numero;

    ispar = par(numero);

    if(ispar){
        cout << "o numero e par!" << endl;
    }else{
        cout << "o numero e impar!" << endl;
    }
}


bool par(int n1){
    if(n1 % 2 == 0){
        return true;
    }else{
        return false;
    }
}