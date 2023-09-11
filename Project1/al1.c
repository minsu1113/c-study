#include <stdio.h>
main() {
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	int A = 1;
	int B = 1;
	int C = 1;

	do
	{
		sum = sum + A;
		A = A + 1;
	} while (A <= 100);

	do
	{
		if (B % 2 == 0)
		{
			sum1 = sum1 + B;
		}B = B + 1;
	} while (B <= 100);

	do
	{
		if (C % 2 == 1)
		{
			sum2 = sum2 + C;
		}C = C + 1;
	} while (C <= 100);

	printf("%d\n", sum);
	printf("%d\n", sum1);
	printf("%d", sum2);

}