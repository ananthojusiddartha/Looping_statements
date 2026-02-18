#include<stdio.h>
int main()
{
int i=1;
int count=0;
for(i=2;i<=10;i++)
{
if(i%2==0)
{
count++;
}
}
printf("count=%d\n",count);
return 0;
}