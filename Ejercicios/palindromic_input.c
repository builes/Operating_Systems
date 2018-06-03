#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

  char uno[256];
  char dos[256];
  int flag = 1;


  sscanf(argv[1], "%[^\t\n]", uno);
  sscanf(argv[2], "%[^\t\n]", dos);

  printf("%s\n", uno);
  printf("%s\n", dos);

  //printf("%zu\n", strlen(uno));

  if(strlen(uno) == strlen(dos)){

    int i;
    for(i = 0; i < strlen(uno); i++){

      if(uno[i] != dos[strlen(uno) - i - 1]){
        flag = 0;
        printf("%d\n", i);
        printf("%s\n", "No coresponde");
      }

    }

  }else{
    flag = 0;
    printf("%s\n", "No coresponde por tamaño");
  }


  if(flag == 1){
    printf("%s\n", "Corresponde");
  }


  return 0;


}
