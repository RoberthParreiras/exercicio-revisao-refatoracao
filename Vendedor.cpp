#include "Vendedor.hpp"
#define PERIODO 12

double Vendedor::InformacaoVendedor::getQuotaTotalAnual() {
	return quotaMensalVendas * PERIODO;
}

void Vendedor::InformacaoVendedor::setNome(std::string nm) {
	nome = nm;
}

std::string Vendedor::InformacaoVendedor::getNome() {
	return nome;
}