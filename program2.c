#include <stdio.h>
int main()
{
int a, b, m, n, r;
int g, l;
printf("Enter two numbers\n");
scanf("%d%d",&m,&n);
a=m;
b=n;
while (b!=0)
{
r=a%b;
a=b;
b=r;
}
g=a;
l=(m*n)/g;
printf("GCD=%d and LCM=%d\n",g,l);
return(0);
}