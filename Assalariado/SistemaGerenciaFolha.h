#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include"Funcionario.h"
#include"OrcamentoEstouradoException.h"


class SistemaGerenciaFolha
{
    private:
        int i = 0;
        Funcionario *funcionarios[10];
        double orcamentoMaximo;
    public:
        SistemaGerenciaFolha(double orcamentoMaximo);
        void setFuncionario(Funcionario *func);
        double calcularValorTotalFolha();
        double consultarSalarioFuncionario(std::string nome);

};

#endif // SISTEMAGERENCIAFOLHA_H
