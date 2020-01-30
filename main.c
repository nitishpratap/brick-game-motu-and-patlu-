#include<stdio.h>
#include<stdlib.h>
int main()
{
int N,itr,sum=0,prev;
scanf("%d",&N);
for(itr=1;itr<N;itr++)
{
if(sum<N)
{
prev=sum;
sum=sum+itr+itr*2;
}
else
break;
}
itr--;
sum=N-prev;
if(sum<=itr)
printf("Patlu");
else
printf("Motu");
}
