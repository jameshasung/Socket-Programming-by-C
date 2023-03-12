#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *work_thread(void * arg); 

int num_threads;
int max_num; 

int main(int argc, char *argv[])
{
	pthread_t *thread;
	int *index; 
	int sum = 0;

	printf("Number of threads: ");
	scanf("%d", &num_threads);
	printf("Maximum integer (> Number of threads):");
	scanf("%d", &max_num);

	// TODO: pthread & index array
	thread = (pthread_t*) malloc();
	index = (int*) malloc();

	// TODO: pthread create	
	for (i = 0; i < num_threads; i++)
	{

	}

	// TODO: pthread_join
	for (i = 0; i < num_threads; i++)
	{
		
	}
	
	
	printf("result: %d \n", sum);
	return 0;
}

void *work_thread(void *arg) 
{
	/// 
	return ;
}
