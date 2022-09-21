#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int sum;
	printf("Welcome. This program can add three numbers you input.\n Know enter three numbers\n");
	printf("Enter three numbers in this form:xxx,xxx,xxx\n");
	scanf("%d,%d,%d", &a, &b, &c);
	sum =a + b + c;
	printf("The answer is:%d\n", sum);
	printf("Thank you.\n Have a good day.");
	return 0;
}
