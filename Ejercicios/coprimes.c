#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>


int main(int argc, char *argv[]){
    mpz_t n, contador, mcd, comparador, uno;
    mpz_init(n);
    mpz_init(contador);
    mpz_init(mcd);
    mpz_init(comparador);
    mpz_init(uno);
    mpz_set_str(n, argv[1], 10);
    mpz_set_ui(contador, 0);
    mpz_set_ui(mcd, 0);
    mpz_set_ui(comparador,0);
    mpz_set_ui(uno, 1);
    gmp_printf ("N: %Zd\n", n);


    while(mpz_cmp(n, contador) > 0){
      //Calculamos el máximo común divisor entre los números
      mpz_gcd (mcd, n, contador);

      //Si es coprimo lo imprimimos
      if(mpz_cmp(mcd, uno) == 0){
        gmp_printf ("Coprimo: %Zd\n", contador);
      }

      //contador++
      mpz_add_ui (contador, contador, 1);
    }


    return 0;
}