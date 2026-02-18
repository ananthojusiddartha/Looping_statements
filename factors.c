#include<stdio.h>
int main()
{
int num,r1,r2,i;
printf("Enter the number: \n");
scanf("%d",&num);
printf("Enter the start point of range: \n");
scanf("%d",&r1);
printf("Enter the end point of range: \n");
scanf("%d",&r2);
int count=0;
for(int i=r1;i<=r2;i++)
{
if(num%i==0)
{
count++;
}
}
printf("count=%d",count);
return 0;
}