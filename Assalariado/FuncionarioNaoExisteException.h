#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include<string>


class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException()throw();
        virtual ~FuncionarioNaoExisteException()throw();
        virtual std::string what();
    private:
        std::string msg = "Funcionario nao existe";
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
