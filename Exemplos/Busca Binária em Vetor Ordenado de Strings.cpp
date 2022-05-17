// Busca Binária em Vetor Ordenado de Strings

#include <iostream>
using namespace std;

int buscar(string palavra, char busca);

int main (){
	string s;
	char c;
	
	cin>> s>> c;
	
	cout<< buscar(s,c)<< endl;
	return 0;
}

int buscar(string palavra, char busca){
	int posicao = -1;
	unsigned i = 0;
	
	while ((i < palavra.size()) and (palavra[i] != busca))
		i++;
	
	if (i != palavra.size())
		posicao = i;
		
return posicao;
}	
