#include<stdio.h>
int main()
{
int a;
printf("Enter the number: \n");
scanf("%d",&a);
while(a!=0)
{
int dig=a%10;
if(dig!=0)
{
printf("%d\n",dig);
}
a=a/10;
}
return 0;
}