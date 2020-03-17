#ifndef ASSALARIADO_H_INCLUDED
#define ASSALARIADO_H_INCLUDED
#include "Funcionario.h"

class Assalariado: public Funcionario{
    private:
        double salario;
    public:
        double calcularSalario();
        Assalariado(double salario, std::string nome, int matricula);

};

#endif // ASSALARIADO_H_INCLUDED
