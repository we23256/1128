#include<stdio.h>
void abc(int []);

int main()
{
	int a[]={1,2,3};
	
	printf("%x\n",a);
	
	abc(a);
	
	return 0;
}
void abc(int b[])
{
	printf("%x\n",b);
}
