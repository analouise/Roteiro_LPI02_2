#include "Assalariado.h"
double Assalariado::calcularSalario(){
    return salario;
}
Assalariado::Assalariado(double salario, std::string nome, int matricula){
    this->salario = salario;
    this->matricula = matricula;
    this->nome = nome;

}
