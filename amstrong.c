#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,c=0,temp,r;
printf("enter no");
scanf("%d",&a);
temp=a;
while(a!=0)
{
r=a%10;
a=a/10;
c=c+(r*r*r);
}
if(temp==c)



printf("\n amstrong no");

else



printf("\n not a amstrong no");

}

