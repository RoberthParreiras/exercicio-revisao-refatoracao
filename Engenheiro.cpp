#include <string>
#include "Engenheiro.hpp"

std::string Engenheiro::InformacaoEngenheiro::getNome() {
	return nome;
}

void Engenheiro::InformacaoEngenheiro::setNome(std::string nm) {
	nome = nm;
}

int Engenheiro::InformacaoEngenheiro::getProjetos() {
	return projetos;
}

void Engenheiro::InformacaoEngenheiro::setProjetos(int proj) {
	projetos = proj;
}