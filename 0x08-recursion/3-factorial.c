#include "main.h"
/**
  *factorial - function that returns the factorial of a given number
  *@n : the number to be factored
  *Return : -1 for number lesser than 0
  **/
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
	return (-1);
}
