#include <stdio.h>
#include <math.h>
#include "lib/calc.h"
#include "lib/globalmath.h"

int a,b,c,d;
char z;
static int pyth();
static int vol();

int main(){
	printf("Welcome to Reyhank45's \n");
	printf("Lilik destroyer, please select one of the modules :\n");
	printf("p for pythagoras, v for volume and c for calculator \n");
	printf("and g for global calculator \n");
	scanf("%c",&z);
	switch(z){
	case 'p' :
	pyth();
	break;

	case 'v' :
	vol();
	break;

	case 'c' :
	calc();
	break;

	case 'g' :
	global();
	break;

	default :
	printf("Wrong syntax please try again\n");
	break;
	}
	return 0;
}

int pyth(){
	printf("The active formula is : C^2 = A^2 = B^2\n");
	printf("A = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	c = a * a + b * b;
	d = sqrt(c);
	printf("C = %d\n",d);
}

int vol(){
	printf("The active formula is : P x L x T = V\n");
	printf("P = ");
	scanf("%d",&a);
	printf("L = ");
	scanf("%d",&b);
	printf("T = ");
	scanf("%d",&c);
	d = a * b * c;
	printf("V = %d \n",d);
}
