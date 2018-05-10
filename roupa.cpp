#include <iomanip>
#include "roupa.h"

Roupa::Roupa(){}

Roupa::Roupa(string codigo, 
    string descricao, 
    short preco, 
    string marca, 
    char sexo, 
    string tamanho):
        Produto(codigo, descricao, preco), 
        marca(marca), 
        sexo(sexo), 
        tamanho(tamanho){}

Roupa::~Roupa(){}

string Roupa::getMarca(){
    return this->marca;
}

char Roupa::getSexo(){
    return this->sexo;
}

string Roupa::getTamanho(){
    return this->tamanho;
}

void Roupa::setMarca(string marca){
    this->marca = marca;
}

void Roupa::setSexo(char sexo){
    this->sexo = sexo;
}

void Roupa::setTamanho(string tamanho){
    this->tamanho = tamanho;
}

std::ostream& Roupa::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << this->marca << " | " 
		<< std::setfill (' ') << std::setw (3) << this->sexo << " | " 
        << std::setfill (' ') << std::setw (3) << this->tamanho << " | " ;
	return o;
}