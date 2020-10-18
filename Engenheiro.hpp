#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

namespace Engenheiro {

class InformacaoEngenheiro : public Empregado::InformacaoEmpregado {

public:
	void setNome(std::string nm);
	std::string getNome();
	int getProjetos();
	void setProjetos(int proj);
private:	
	std::string nome = "";
	int projetos = 0;

};
}




#endif