#include "Empregado.hpp"
#define HORASPADRAO 8
#define DIASTRABALHADOS 23

double Empregado::InformacaoEmpregado::pagarMes(double horasTrabalhadas) {
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORASPADRAO) {
        pagarHoraExtra(horasTrabalhadas);
    }
    else 
        return (horasTrabalhadas * salarioHora) * DIASTRABALHADOS; 
}

double Empregado::InformacaoEmpregado::pagarHoraExtra(double horasTrabalhadas) {
    double horasMaisQueOito = horasTrabalhadas - HORASPADRAO;
    horasTrabalhadas += horasMaisQueOito / 2;
    
    return (horasTrabalhadas * salarioHora) * DIASTRABALHADOS;
}

void Empregado::InformacaoEmpregado::setSalarioHora(double sal) {
    salarioHora = sal;
}

double Empregado::InformacaoEmpregado::getSalarioHora() {
    return salarioHora;
}

void Empregado::InformacaoEmpregado::setQuotaMensalVendas(double quota) {
    quotaMensalVendas = quota;
}

double Empregado::InformacaoEmpregado::getQuotaMensalVendas() {
    return quotaMensalVendas;
}