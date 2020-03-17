#ifndef HORISTAS_H_INCLUDED
#define HORISTAS_H_INCLUDED
#include"Funcionario.h"
class Horistas : public Funcionario{
    private:
        double salario;
        double horasExtras;
    public:
        double calcularSalario();
        Horistas(double salario, double horasExtras, std::string nome, int matricula);
};



#endif // HORISTAS_H_INCLUDED
