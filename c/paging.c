#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int size,m,n,pgno,pagetable[3]={5,6,7},i,j,frameno;
double ml;
int ra=0,ofs;
printf("enter process size(in KB of max 12 KB):");
scanf("%d",&size);
ml=size/4;
n=(int)ml;
printf("total no of pages:%d",n);
printf("\n enter relative address(in hexa)\n");
scanf("%d",&ra);
pgno=ra/1000;
ofs=ra%1000;
printf("pageno=%d\n",pgno);
printf("page table");
for(i=0;i<n;i++)
printf("\n%d[%d]",i,pagetable[i]);
frameno=pagetable[pgno];
printf("\nphysical address:%d%d",frameno,ofs);
return 0;
}
