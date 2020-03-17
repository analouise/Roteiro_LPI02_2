#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMaximo){

	this->orcamentoMaximo = orcamentoMaximo;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *func)
{
   funcionarios[i] = func;
   i++;
}

double SistemaGerenciaFolha::calcularValorTotalFolha()
{
    double total = 0;

	for (int i = 0; i < 3; i++){
		total += funcionarios[i]->calcularSalario();
	}
	if (total <= orcamentoMaximo){
		return total;
	}
	throw OrcamentoEstouradoException();

}

double SistemaGerenciaFolha::consultarSalarioFuncionario(std::string nome)
{
    for (int i = 0; i < 3; i++){
		if (funcionarios[i]->getNome() == nome){
			return funcionarios[i]->calcularSalario();
		}
	}
	throw FuncionarioNaoExisteException();

}
