//to erxecute type gcc semaphore.c -pthread
#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<unistd.h>

sem_t m;
void *th(void *arg){
	sem_wait(&m);
	printf("\nentered");
	sleep(4);
	printf("\njust exited");
	sem_post(&m);
}
int main(){
	sem_init(&m,0,1);
	pthread_t t1,t2;
	pthread_create(&t1,NULL,th,NULL);
	sleep(2);
	pthread_create(&t2,NULL,th,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	sem_destroy(&m);
	return 0;
	
}
