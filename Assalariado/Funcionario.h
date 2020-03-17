#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED
#include<string>

class Funcionario{
    protected:
        std::string nome;
        int matricula;
    public:
        void setNome(std::string nome);
        void setMatricula(int matricula);
        std::string getNome();
        int getMatricula();
        virtual double calcularSalario() = 0;
};



#endif // FUNCIONARIO_H_INCLUDED
