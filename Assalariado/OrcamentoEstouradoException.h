#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <string>
#include <exception>



class OrcamentoEstouradoException : public std::exception
{
    public:
        OrcamentoEstouradoException()throw();;
        virtual std::string what();
        virtual ~OrcamentoEstouradoException()throw();

    private:
        std::string msg = "Valor da folha maior que o orcamento maximo";
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
