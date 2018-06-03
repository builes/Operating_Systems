#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>
#include <stdbool.h>


int number_of_perfects;
int number_of_threads;

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void* thread_func(void* argument) {
  
  //Número del hilo
  int n = *(int*)argument;

  

  pthread_exit(NULL); 

}

int main(int argc, char *argv[]) {
  pthread_t my_thread;
  int i;
  int j;
  
  if (argc <= 1) {
    number_of_threads = 8;
    number_of_perfects = 999;
  }
  else{
    number_of_threads = strtol(argv[1], NULL, 0);
    number_of_perfects = strtol(argv[2], NULL, 0);
  }
  
  for (i = 0 ; i < number_of_threads; i++) {
    pthread_create(&my_thread, NULL, thread_func, &i); 
    pthread_join(my_thread, NULL);
  }

  return 0;
}