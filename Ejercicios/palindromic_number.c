#define __STDC_FORMAT_MACROS 1

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>

uint64_t decimalToBinary(uint64_tdecimal);
bool isPalindrome(uint64_t number);


int main(){

	
	uint64_t i = 0;
	while(i <= 1000000){
		
		uint64_t decimal = i;	
  		uint64_t binary = decimalToBinary(decimal);
  		
  
  		if(isPalindrome(decimal) && isPalindrome(binary)){
    		printf("%" PRIu64 "\t", decimal);
    		printf("%" PRIu64 "\n", binary);
  		}
		  
		i++;		
	
	}

			
			
  	return 0;


}


uint64_t decimalToBinary(uint64_t decimal){
	
	uint64_t temporalDecimal, remainder, base = 1, binary = 0;
	temporalDecimal = decimal;
	
	while(temporalDecimal>0){
		
		remainder = temporalDecimal % 2;
        binary = binary + remainder * base;
        temporalDecimal = temporalDecimal / 2;
        base = base * 10;
		
		
	}
	
	return binary;
	
}

bool isPalindrome(uint64_t number){
	
	uint64_t temporalDecimal = number, remainder, reverse = 0;
		
	while(temporalDecimal != 0){
        remainder = temporalDecimal % 10;
        reverse = reverse*10 + remainder;
        temporalDecimal /= 10;
    }

	if(number == reverse){
		return true;
	}else{
		return false;
	}
	
}






