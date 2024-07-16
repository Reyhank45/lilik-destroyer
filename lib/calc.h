#include <stdio.h>
int a,b,c;
char y;

void calc(){
	printf("Lilik calculator module v1.0\n");
	printf("A = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	printf("please select the operation ( + | - | * | / ) \n");
	scanf(" %c",&y);
	switch(y){
		case '+' :
		c = a + b;
		break;

		case '-' :
		c = a - b;
		break;

		case '*' :
		c = a * b;
		break;

		case '/' :
		c = a / b;
		break;

		default :
		printf("Oops wring syntax please try again\n");
		break;
	}
	printf("C = %d\n",c);
}
