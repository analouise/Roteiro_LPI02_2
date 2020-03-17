#include "Comissionados.h"

double Comissionados::calcularSalario(){
    return salario + (salario* 0.15 * vendas);
}

Comissionados::Comissionados(double salario, double vendasSemanais, std::string nome, int matricula){
    this->percentualComissao = percentualComissao;
    this->vendasSemanais = vendasSemanais;
    this->matricula = matricula;
    this->nome = nome;
}
