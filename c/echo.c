#include<stdio.h>
#include<string.h>
#include<unistd.h>
#define msgsize 29
int main()
{
int ser[2],cli[2],pid;
char*inbuff="hello";
char*msg="thankyou";
pipe(ser);
pipe(cli);
printf("\n server read id=%d,write id=%d",ser[0],ser[1]);
printf("\n client readid=%d,write id=%d",cli[0],cli[10]);
pid=fork();
if(pid==0)
{
printf("\n i am in child process!");
close(cli[0]);
close(ser[1]);
write(cli[1],msg,msgsize);
printf("\necho message written to pipe..!");
//sleep(2);
read(ser[0],inbuff,msgsize);
printf("\n echo message received fromerver");
printf("\n %s",inbuff);
}
else
{
close(cli[0]);
close(ser[1]);
printf("\n parent process");
read(cli[0],inbuff,msgsize);
write(ser[1],inbuff,msgsize);
printf("\n parent ended!");
}}
