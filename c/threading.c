#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
#include<unistd.h>
pthread_t tid[2];
void *dosomething(void *args)
{
unsigned long i=0;
pthread_t id=pthread_self();
if(pthread_equal(id,tid[0]))
{
printf("\n first thread processing \n");
}
else
{
printf("\n second thread processing \n");
}
for(i=0;i<(0xFFFFFFFF);i++);
return NULL;
}
int main(void)
{
int i=0;
int err;
while(i<2)
{
err=pthread_create(&(tid[i]),NULL,&dosomething,NULL);
if(err!=0)
printf("\n cant create thread:[%s]",strerror(err));
else
printf("\n thread created successfully \n");
i++; }
sleep(5);
return 0;
}
