#include <stdio.h>
#include <gmp.h>

int main(int argc, char *argv[]){

  unsigned long int iterations;
  unsigned long int i;

  sscanf(argv[1], "%lu", &iterations);
  i = 0;

  mpz_t next;
  mpz_init(next);

  mpz_t first;
  mpz_init(first);
  mpz_set_str (first, "1", 10);

  mpz_t second;
  mpz_init(second);
  mpz_set_str (second, "1", 10);



  //while(i < iterations){
  while(i < iterations){
    //printf("%d", next);
    //printf(" ");
    gmp_printf("%Zd\n", next);
	  //next = first + second;
    mpz_add(next,first,second);
	  //first = second;
    mpz_swap (first, second);
	  //second = next;
    mpz_swap (second, next);
    //i++;
    i++;
  }

  return 0;


}
