
#ifndef COMISSIONADOS_H_INCLUDED
#define COMISSIONADOS_H_INCLUDED
#include"Funcionario.h"

class Comissionados : public Funcionario{
    private:
        double percentualComissao;
        double vendasSemanais;
    public:
        double calcularSalario();
        Comissionados(double percentualComissao, double vendasSemanais, std::string nome, int matricula);


};

#endif // COMISSIONADOS_H_INCLUDED
