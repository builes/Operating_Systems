#include <iostream>

using namespace std;

int main(){

	//Puntero
	char *apuntador;

	//Variable
	char letra = 'A';

	//Posición
	apuntador = &letra;

	//Valor almacenado
	*apuntador = letra;
	//*apuntador = 'B';

	cout << "El valor almacenado es: " << *apuntador << "\n";
	cout << "La posición de almacenamiento es: " << apuntador << "\n";

	//Fin
	return 0;

}