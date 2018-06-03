#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


//¿Que será una void* function?
//Así como los void* pointers, son generic pointers, lo cual significa que los podemos
//Teledirigir a cualquie otro tipo de puntero, ya sea int, char, etcétera.

void *print_message_function( void *ptr );

int main(){


	//Creamos los POSIX threads
	pthread_t thread1, thread2;
	int iret1, iret2;
	char *message1 = "Thread 1";
	char *message2 = "Thread 2";


	//Creamos los thread
	/*	phtread_create arguments
	//		first one: memory address of the thread
	//
	//		second: thread atributtes (create a pthread_attr_t structure).
	//
	//		third: pointer to the function to be threaded. 
	//		Function has a single argument: pointer to void. 
	//
	//		four: pointer to argument of function. 
	//		To pass multiple arguments, send a pointer to a structure.
	*/

	iret1 = pthread_create(&thread1, NULL, print_message_function, (void*) message1);
	iret2 = pthread_create(&thread2, NULL, print_message_function, (void*) message2);


	//Esperamos a que los hilos completen sus tareas, antes de seguir con el código
	/*	phtread_join
	//	wait for termination of another thread
	//	first argument: thread to kill
	//	second one: value passed by pthread_exit
	*/
	pthread_join(thread1,NULL);
	pthread_join(thread1,NULL);

	printf("Thread 1 returns: %d\n",iret1);
    printf("Thread 2 returns: %d\n",iret2);
  	
  	return 0;

}


void *print_message_function( void *ptr ){
     char *message;
     message = (char *) ptr;
     printf("%s \n", message); 
 }