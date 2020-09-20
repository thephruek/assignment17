#include<stdio.h>
int main() {
	printf("Credit of the 1st subject = 3 \n");
	printf("Credit of the 2nd subject = 2 \n");
	printf("Credit of the 2nd subject = 1 \n");
	float score1, score2, score3, total;
	printf("Enter score 1 [Max 100] : ");
	scanf_s("%f", &score1);
	printf("Enter score 2 [Max 100] : ");
	scanf_s("%f", &score2);
	printf("Enter score 3 [Max 100] : ");
	scanf_s("%f", &score3);
	int x[] = { score1,score2,score3 };
	score1 = score1 * 3.0;
	score2 = score2 * 2.0;
	total = (score1 + score2 + score3) / 6.0;
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