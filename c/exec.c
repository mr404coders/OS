#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include<sys/wait.h>
int main()
{
pid_t pid;
switch(pid=fork())
{
case-1:
perror("fork failed");
exit(-1);
case-0:
printf("child process \n");
execl("/bin/date","date",0);
exit(0);
default:
wait(0);
printf("child terminated\n");
}
}
