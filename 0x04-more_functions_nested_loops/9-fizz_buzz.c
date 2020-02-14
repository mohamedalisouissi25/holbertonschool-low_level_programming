#include <stdio.h>
/**
 * main - prints fizzbuzz and buzz
 *
 * Return: Always 0
 */
int main(void)
{
int Al;

for (Al = 1; Al < 100; Al++)
{
if (Al % 3 == 0 && Al % 5 == 0)
	printf("FizzBuzz ");
else if (Al % 3 == 0)
	printf("Fizz ");
else if (Al % 5 == 0)
	printf("Buzz ");
else
	printf("%d ", Al);
}
	printf("Buzz\n");
return (0);
}
