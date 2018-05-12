#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "produto.h"
#include <string>

using std::string;

class Roupa : public Produto{
	private:
		string marca;
		string sexo;
		string tamanho;
	public:
		Roupa();
		Roupa(string codigo, string descricao, short preco, 
			string marca, string sexo, string tamanho);
		~Roupa();
		// getters
		string getMarca();
		string getSexo();
		string getTamanho();
		// setters
		void setMarca(string marca);
		void setSexo(string sexo);
		void setTamanho(string tamanho);
	private:
		std::ostream& print(std::ostream &o) const;
};

#endif