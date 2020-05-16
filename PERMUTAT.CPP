#include<stdio.h>
#include<conio.h>

void main()
{
int n,r,i;
int na=1,pa=1,ma=1;
float comb,perm;
clrscr();

printf("Enter value of n and r:\n");
scanf("%d%d",&n,&r);

for(i=1;i<=n;i++)
{
na=na*i;
}

for(i=1;i<=r;i++)
{
pa=pa*i;
}

for(i=1;i<=(n-r);i++)
{
ma=ma*i;
}
perm=na/ma;
comb=na/( pa*ma);
printf("Permutation:\t value of %dP%d is : %f\n Combination:\t value of %dC%d is : %f",n,r,perm,n,r,comb);

getch();
}
