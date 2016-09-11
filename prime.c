#include<stdio.h>
void main()
{
int k=4,j=20,i;
int s=0;
for(k=4;k<=j;k++)
{
for(i=2;i<k/2;i++)
{
if(k%i==0)
{
s=1;
break;
}
}
if(s==0)
printf("%d",k);
}
}
