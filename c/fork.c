#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
pid_t p;
int x=5;
p =fork();
x++;
if (p<0){
	printf("\nFailed");
	exit(-1);
}
else if(p==0){
	printf("\nchild process");
	printf("\nProcess id %d",getpid());
	printf("\nValue of x is %d", x);
	printf("\nProcess id of parent is %d\n", getppid());
}
else{
	printf("\nparent process");
	printf("\nProcess id %d",getpid());
	printf("\nValue of x is %d", x);
	printf("\nProcess id of shell is %d\n", getppid());
}
return 0;
}
