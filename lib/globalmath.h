#include <stdio.h>
#include <math.h>
int a,b,c;

void global(){
	printf("Welcome to the global math solution finder \n");
	printf("Almost all equation will be printed here \n");
	printf("A = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	printf("The results are : \n");
	c = a + b;
	printf("A + B = %d \n",c);
	c = a - b;
	printf("A - B = %d \n",c);
	c = a * b;
	printf("A x B = %d \n",c);
	c = a / b;
	printf("A / B = %d \n",c);
	c = sqrt(a);
	printf("Square root of A is %d \n",c);
	c = a * a;
	printf("The power of A is %d \n",c);
}
