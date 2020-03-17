 #include"Horistas.h"

Horistas::Horistas(double salario, double horasExtras, std::string nome, int matricula){
    this->salario = salario;
    this->horasExtras = horasExtras;
    this->matricula = matricula;
    this->nome = nome;
}

double Horistas::calcularSalario(){
    return salario + (salario * 1.5 * horasExtras);
}
