#include <iostream>
#include <vector>
#include <memory>
#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Produto>> lista;
	
	lista.push_back(make_shared<Fruta>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.push_back(make_shared<Fruta>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.push_back(make_shared<Fruta>("001002005-11","Limao verde",2.30,"01/10/2017",25));
	lista.push_back(make_shared<Roupa>("001002006-77","Camisa social",75.99,"Colombo",'M',"G"));
	lista.push_back(make_shared<Bebida>("001002006-97","Skoll", 14.99, 75.44));

	for (auto i = lista.begin(); i != lista.end(); ++i){
		std::cout << (**i) << std::endl;	
	}

	Fruta * p1 = new Fruta("001002006-77","Maca verde",8.70,"01/10/2017",18);
	Roupa * p = new Roupa("001002006-77","Camisa social",75.99,"Colombo",'M',"G");

	std::cout << *p1 << std::endl;
	std::cout << *p << std::endl;

	if(*p1 == *p)
		std::cout << "sim" << *p1+*p << std::endl;
	else
		std::cout << "não" << std::endl;


	return 0;
}