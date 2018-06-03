#include <iostream>


using namespace std;

int main(){

//Punteros

//Creamos una variable
int variable = 20;

//El asterisco resuelve el valor de una posición de memoria.
//El ampersand devuelve la posición de memoria de una variable.
//En conclusión, estamos obteniendo el valor de 'variable' y pasandolo a 'apuntador'.
int *apuntador = &variable;

//Por lo tanto, usando el asterisco podemos alterar y mostrar el valor.
//*apuntador = 20;

cout << "El valor almacenado es: " << *apuntador << "\n";
cout << "La posición de almacenamiento es: " << apuntador << "\n";

//Fin
return 0;

}
