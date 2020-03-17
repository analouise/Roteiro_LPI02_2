 
#include "Conta.h"
#include "Conta.cpp"
#include "Conta.h"
#include <iostream>
using namespace std;

int main(){
    Conta c1 = Conta("Joao", 1000, 10, 500);

    c1.definirLimite();


    c1.depositar(100);
    c1.sacar(20);

    cout << "Saldo atual:" <<c1.getSaldo() << endl;
    cout << "Limite:" << c1.getLimite() << endl;
}
