#include <stdio.h>
main() {
	int sum = 0;
	int a = 1;
	int b = 1;

	do
	{
		sum = sum + a;
		a = a + b;
		b = b + 2;
	} while (b <= 19);

	printf("%d", sum);
}