#include "Conta.h"

Conta::Conta(){
	nomeCliente = "Sem Nome";
	salarioMensal = 0;
	numeroConta = 0;
	saldo = 0;
	limite = 0;
}
Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo):Conta(){
	setNomeCliente(nomeCliente);
	setSalarioMensal(salarioMensal);
	setNumeroConta(numeroConta);
	setSaldo(saldo);
}
void Conta::setNomeCliente(std::string nome){
	this-> nomeCliente = nome;
}
void Conta::setSalarioMensal(double salarioMensal){
	salarioMensal>=0 ? this-> salarioMensal = salarioMensal : this->salarioMensal = 0;
}
void Conta::setNumeroConta(int numeroConta){
	numeroConta>=0 ? this-> numeroConta = numeroConta : this->numeroConta = 0;
}
void Conta::setSaldo(double saldo){
	saldo>=0 ?  this-> saldo = saldo : this-> saldo = 0;
}
void Conta::setLimite(double limite){
	limite>=0 ? this-> limite = limite : limite = limite;
}
std::string Conta::getNomeCliente(){
	return nomeCliente;
}
double Conta::getSalarioMensal(){
	return salarioMensal;
}
int Conta::getNumeroConta(){
	return numeroConta;
}
double Conta::getSaldo(){
	return saldo;
}
double Conta::getLimite(){
	return limite;
}

void Conta::sacar(double valor){
	this->saldo = saldo - valor;
}
void Conta::depositar(double valor){
	this->saldo = saldo + valor;
}
void Conta::definirLimite(){
	limite = salarioMensal * 2;
}
