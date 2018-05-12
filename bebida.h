#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"
#include <string>

using std::string;

class Bebida : public Produto{
	private:
		short teorAlcoolico;
	public:
		Bebida();
		Bebida(string _codigo, string _descricao, short _preco, 
			short teorAlcoolico);
		~Bebida();
		// getters
		short getTeor();
		// setters
		void setTeor(short teorAlcoolico);
	private:
		std::ostream& print(std::ostream &o) const;
};

#endif