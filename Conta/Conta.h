#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include "Iconta.h"
#include <string>
class Conta: public Iconta{

	protected:
		std::string nomeCliente;
		double salarioMensal;
		int numeroConta;
		double saldo;
		double limite;
	public:
		Conta();
		Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);  //Conta();
		void setNomeCliente(std::string nome);
		void setSalarioMensal(double salarioMensal);
		void setNumeroConta(int numeroConta);
		void setSaldo(double saldo);
		void setLimite(double limite);
		std::string getNomeCliente();
		double getSalarioMensal();
		int getNumeroConta();
		double getSaldo();
		double getLimite();
		void sacar(double valor);
		void depositar(double valor);
		void definirLimite();
};

#endif // CONTA_H_INCLUDED
© 2020 GitHub, Inc.
