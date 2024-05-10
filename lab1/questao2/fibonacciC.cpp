/*  Laboratório 1
    O programa calcula o n-ésimo número da série Fibonacci
    Autora: Júlia Barbosa
*/
#include <iostream>
#include "fibonacciC.h"
using namespace std;

void fibonacci::setFibonacci (int numeroF){
    resultado = computerFibonacci(numeroF);
 };

int fibonacci::getFibonacci (){
    return resultado;
};
int fibonacci::computerFibonacci(int numeroF){
    if (numeroF == 0 || numeroF == 1){
        return numeroF;
    }else{
        return (numeroF - 1) + (numeroF - 2);
    };
};

int main(){
    fibonacci numFibonacci;

    cout << "Insira um numero"<< endl;
    cin >> numeroF;
    numFibonacci.setFibonacci(numeroF);
    cout << "o numero eh: " << numFibonacci.getFibonacci();

    return 0;
}



// metod public: 
    // setFibonacci
    // pegar o resultado com o get

//metod private:
    //resultado
    //computerFibonacci