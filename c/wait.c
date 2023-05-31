#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
int x,p;
p=fork();
if (p==-1){
	printf("\nfailed");
	exit(-1);
}
else if (p == 0){
	printf("\nchild");
	for (int x;x<5;x++){
		printf("\nchild %d",x);
	}
	printf("\n child ended");
}
else {
	wait(0);
	printf("\nparrent");
}
exit(0);
}
