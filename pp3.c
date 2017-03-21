#include<stdio.h>
int main()
{
int a,c=0,temp,r;
printf("Enter the number");
scanf("%d",&a);
temp=a;
while(a!=0)
{
r=a%10;
a=a/10;
c=c+(r*r*r);
}
if(temp==c)
printf("Amstrong number");
else
printf("Not a amstrong");


return 0;
}
