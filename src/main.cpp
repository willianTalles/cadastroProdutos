#include <iostream>
#include <fstream>
#include <vector>
#include <memory>

#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"

using namespace std;

int main(int argc, char const *argv[]){
	std::vector<shared_ptr<Produto>> lista;

	string codigoBarra, descricao, preco, data, validade, tipo;
	string marca, sexo, tamanho, teor;

	ifstream arquivo( "dados.txt" );

	if ( arquivo.is_open() ){	
		while( !arquivo.eof() ){
			getline( arquivo, tipo, ';');
			switch( stoi( tipo ) ){
				case 1:
					getline( arquivo, codigoBarra, ';');
					getline( arquivo, descricao, ';' );
					getline( arquivo, preco, ';' );
					getline( arquivo, data, ';' );
					getline( arquivo, validade, ';' );

					lista.push_back(make_shared<Fruta>( codigoBarra , descricao , stod(preco), data, stoi(validade)));
					break;

				case 2:
					getline( arquivo, codigoBarra, ';');
					getline( arquivo, descricao, ';' );
					getline( arquivo, preco, ';' );
					getline( arquivo, marca, ';' );
					getline( arquivo, sexo, ';' );
					getline( arquivo, tamanho, ';' );

					lista.push_back(make_shared<Roupa>( codigoBarra , descricao , stod(preco), marca, sexo, tamanho ));
					break;
				
				case 3:
					getline( arquivo, codigoBarra, ';');
					getline( arquivo, descricao, ';' );
					getline( arquivo, preco, ';' );
					getline( arquivo, teor, ';' );

					lista.push_back(make_shared<Bebida>( codigoBarra , descricao , stod(preco), stod(teor) ));
					break;
			}
		}	
	}

	for (auto i = lista.begin(); i != lista.end(); ++i){
		std::cout << (**i) << std::endl;	
	}

	std::cout<<std::endl;

	double soma = *lista[0] + *lista[3];
	double sub = *lista[4] - *lista[1];

	std::cout << "O preco de " << lista[0]->getDescricao() << " + " << lista[3]->getDescricao() << " = " << soma << std::endl;
	std::cout << "O preco de " << lista[4]->getDescricao() << " - " << lista[1]->getDescricao() << " = " << sub << std::endl;

	if( *lista[2] == *lista[4] )
		std::cout << "O codigo de barra entre " << lista[2]->getDescricao() << " e " << lista[4]->getDescricao() << " Sao iguais "<< std::endl;
	else
		std::cout << "O codigo de barra entre " << lista[2]->getDescricao() << " e " << lista[4]->getDescricao() << " nao sao iguais "<< std::endl;

	return 0;
}