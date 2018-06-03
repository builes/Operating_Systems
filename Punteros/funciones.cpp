#include <iostream>

using namespace std;

int funcion(int valor){
	valor = valor + 10;
	return valor;
}

void funcionPunteros(int *valor){
	*valor = *valor + 10;
}

int main(){

	int numero = 10;

	//Sin punteros

	//Si no retornamos el valor queda adentro
	funcion(10);
	cout << "Usando la función sin punteros: " << numero << "\n";
	//Quizá así...
	//numero = funcion(10);
	//cout << "Usando la función sin punteros: " << numero << "\n";

	//Con punteros

	funcionPunteros(&numero);
	cout << "Usando la función con punteros: " << numero << "\n";

	//Fin
	system("pause");
	return 0;

}