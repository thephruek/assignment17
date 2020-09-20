#include<stdio.h>
int main() {
	printf("Credit of Computer subject = 3 \n");
	printf("Credit of Mathematics subject = 2 \n");
	printf("Credit of Physics subject = 2 \n");
	printf("Credit of Chemistry subject = 2 \n");
	printf("Credit of Business subject = 1 \n");
	float com, math, phi, chem, bus, total;
	printf("Enter your Computer subject score [Max 100] : ");
	scanf_s("%f", &com);
	printf("Enter your Mathematics subject score [Max 100] : ");
	scanf_s("%f", &math);
	printf("Enter your Physics subject score [Max 100] : ");
	scanf_s("%f", &phi);
	printf("Enter your Chemistry subject score [Max 100] : ");
	scanf_s("%f", &chem);
	printf("Enter your Business subject score [Max 100] : ");
	scanf_s("%f", &bus);
	int x[] = { com,math,phi,chem,bus };
	com = com * 3.0;
	math = math * 2.0;
	phi = phi * 2.0;
	chem = chem * 2.0;
	total = (com + math + phi + chem + bus) / 10.0;
	if (total >= 50 && total <= 100)
	{
		printf("You passed\n");
		printf("TotalYour score = %.2f", total);
	}
	else if (total >= 0 && total < 50)
	{
		printf("You failed\n");
		printf("Total Your score = %.2f", total);
	}
	else if (total < 0 || total>100)
	{
		printf("E R R O R !!!\n");
		printf("E R R O R !!!\n");
		printf("PLEASE TRY AGAIN");
	}
	return 0;
}