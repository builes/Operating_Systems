#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *ft;
    int ch;
    char const *name = "abc.txt";

    ft = fopen("test.txt", "r+");

    if (ft!=NULL){
    while ((ch = fgetc(ft)) != EOF){
        if (ch == 'a'){
            fseek(ft, -1, SEEK_CUR);
            fputc('s',ft);
            fseek(ft, 0, SEEK_CUR);
        }
      }
    }

    fclose(ft);
    
    return 0;

}
