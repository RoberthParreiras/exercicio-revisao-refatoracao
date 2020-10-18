#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

namespace Vendedor {

class InformacaoVendedor : public Empregado::InformacaoEmpregado {

public:
	double getQuotaTotalAnual();
	void setNome(std::string nm);
	std::string getNome();

private:
	std::string nome;

};

}



#endif
