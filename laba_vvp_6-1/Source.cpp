#include <stdio.h>
#include <math.h>
int main()
{
	int A, B, swtch;
	swtch = 0;
	printf("Enter A and B, then programm switch their values: ");
	printf("A = ");
	scanf_s("%d", &A);
	printf("B = ");
	scanf_s("%d", &B);
	swtch = A;
	A = B;
	B = swtch;
	printf("Result is: ");
	printf("A = ");
	printf("%d", A);
	printf(" B = ");
	printf("%d", B);
}
