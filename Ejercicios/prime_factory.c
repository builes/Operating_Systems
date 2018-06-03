#define __STDC_FORMAT_MACROS
#include <inttypes.h>

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>


int isPrime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

int sumDigits(int a){
	int sum = 0;
	int remainder = 0;
	int b = a;
	while(b!=0){
		remainder = b%10;
		sum += remainder;
		b = b/10;
	}
	return sum;
}

int main(){

	int c = 0;
	for(int i = 1000000; i < 9999999; i++){
		if(isPrime(i) && isPrime(sumDigits(i))){
			printf("%d -> %d\n", i, sumDigits(i));
			c++;
		}
		if(c==2) break;
	}

}