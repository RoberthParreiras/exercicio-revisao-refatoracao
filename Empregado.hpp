#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

namespace Empregado {

class InformacaoEmpregado {

public:
    double pagarMes(double horasTrabalhadas); 
    double pagarHoraExtra(double horasTrabalhadas);
    void setSalarioHora(double sal);
    double getSalarioHora();
    void setQuotaMensalVendas(double quota);
    double getQuotaMensalVendas();

protected:    
    double salarioHora;
    double quotaMensalVendas;
};

}





#endif
