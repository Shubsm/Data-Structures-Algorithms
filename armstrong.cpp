#include<stdio.h>
void main()
{
	int n,n1,i,j,s=0;
	printf("Enter the no. to be checked whether armstrong or not ...");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		s+=1;
		n1=n1%10;
	}
	printf("%d",&s);
}
