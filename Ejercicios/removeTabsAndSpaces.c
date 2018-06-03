#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *ft;
    char ch;
    int a, b, i, j, k;
    char * line = NULL;
    a = 0;
    b = 0;
 	i = 0;
	ft = fopen("test.txt", "r+");
 	



    if (ft!=NULL){
    	
    	while ((ch = fgetc(ft)) != EOF){
    	
    		a = ftell(ft);
    		fseek(ft, b, SEEK_SET);
    	
    		if (ch != 32 && ch != '\r' && ch != '\n' && ch != '\t') {
            	fputc(ch, ft);
            }
        
        	b = ftell(ft);
        	fseek(ft, a, SEEK_SET);
        	
      }
      

    }
   
   
    for(i = b+1; i <= a;i++){
        fseek(ft, b, SEEK_SET);
        fputc('\n', ft);
        b = ftell(ft);
        fseek(ft, b, SEEK_SET);
    }
    
    

    fclose(ft);
    
    return 0;

}
