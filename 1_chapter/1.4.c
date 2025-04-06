#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("%s %s\n", "Celsius", "Fahr");
	while (celsius <= upper) {
		fahr = (5.0/9.0) * (celsius + 32.0);
		printf("%6.0f %3.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

