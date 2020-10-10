#include<stdio.h>
void fibo(int,int);
int m;
int t;
void main()
{
	
	printf("Enter the value of m ... ");
	scanf("%d",&m);	
	if(m==1)
	{
	printf("1");
	exit(-1);
    }
    if(m==2)
	{
	printf("1 1");
	exit(-1);
    }
    printf("1 1 ");
    t=2;
    fibo(1,1);
}
void fibo(int a1,int b1)
{
	if(t>=m)
	exit(-1);
	int c=a1+b1;
	printf("%d ",c);
	t++;
	fibo(b1,c);
	
}
    

