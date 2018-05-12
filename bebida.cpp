#include <iomanip>
#include "bebida.h"

Bebida::Bebida(){}

Bebida::Bebida(string codigo, 
    string descricao, 
    short preco, 
    short teorAlcoolico):
        Produto(codigo, descricao, preco), 
        teorAlcoolico(teorAlcoolico) {}

Bebida::~Bebida(){}

short Bebida::getTeor(){
    return this->teorAlcoolico;
}

void Bebida::setTeor(short teorAlcoolico){
    this->teorAlcoolico = teorAlcoolico;
}

std::ostream& Bebida::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (6) << this->teorAlcoolico << " % ";
	return o;
}