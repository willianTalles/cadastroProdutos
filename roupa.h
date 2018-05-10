#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "produto.h"
#include <string>

using std::string;

class Roupa : public Produto{
public:
	Roupa();
	Roupa(string _codigo, string _descricao, short _preco, 
			string marca, char sexo, string tamanho);
	~Roupa();
private:
	string marca;
	char sexo;
	string tamanho;
public:
	// getters
	string getMarca();
	char getSexo();
	string getTamanho();
	// setters
	void setMarca(string marca);
	void setSexo(char sexo);
	void setTamanho(string tamanho);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif