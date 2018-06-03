#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){

	string *titulos = NULL;
	string *autores = NULL;

	int size;
	cout << "Ingresa la cantidad de libros a suministrar:";
	string entrada;
	getline(cin,entrada);
	size = stoi(entrada);

	//Esto es dinámico
	//Para esto sirven los punteros aquí
	titulos = new string[size];
	autores = new string[size];

	cout << "Ahora ingresa la información deseada:";

	for(int i = 0; i < size; i++){

		cout << "\nLibro " << i + 1 << "\n";
		cout << "Titulo: ";
		getline(cin,titulos[i]);
		cout << "Autor: ";
		getline(cin,autores[i]);

	}


	//Fin
	delete [] titulos;
	delete [] autores;
	titulos = NULL;
	autores = NULL;
	system("pause");
	return 0;

}