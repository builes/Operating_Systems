#include<stdio.h>
#include <stdlib.h>
#include<pthread.h>
#include<math.h>

double sum = 0;
int l = 0;
int cifras;

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;


void* thread_func(void* argument) {
  int n = *(int*)argument;

  for (int i = l; i < l + n; i++){
    pthread_mutex_lock(&mutex1);
    sum = sum + (pow(-1, i) / (2 * i + 1));
    printf("%.*lf\n",cifras,sum*4);
    pthread_mutex_unlock( &mutex1 );

  }

  pthread_mutex_lock(&mutex2);
  l = l + n;
  pthread_mutex_unlock(&mutex2);


  pthread_exit(NULL); 

}

int main(int argc, char *argv[]) {
  int number_of_threads;
  int number_of_iterations; 
  int number_of_divisions;
  pthread_t my_thread;
  int i;
  
  if (argc <= 1) {
    number_of_threads     = 650;
    number_of_iterations  = 650*100;
    cifras                = 50;
  }
  else{
    number_of_threads     = strtol(argv[1], NULL, 0);
    number_of_iterations  = strtol(argv[2], NULL, 0);
    cifras                = strtol(argv[3], NULL, 0);
  }

  number_of_divisions = number_of_iterations/number_of_threads;
  
  for (i = 0 ; i < number_of_threads; i++) {
    printf("Hilo número: %d ->\n",i);
    pthread_create(&my_thread, NULL, thread_func, &number_of_divisions); 
    pthread_join(my_thread, NULL);
  }

  return 0;
}