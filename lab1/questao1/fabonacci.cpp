#include <iostream>
#include "fabonacci.h"
using namespace std;

int fabonacci(int numero){
    if (numero == 0 || numero == 1){
        return numero;
    }else{
    return (numero - 1) + (numero - 2);
    };
};

int main(){
    cout << "Insira um numero" << endl;
    cin >> numero; 
    cout << "O enesimo numero de " << numero << ": "<< fabonacci(numero) << endl;

    return 0;
}