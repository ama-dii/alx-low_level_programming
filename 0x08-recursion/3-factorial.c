#include "main.h"
/**
  *factorial - function that returns the factorial of a give
  *@n : the number to be factored
  *Return : -1 for number lesser than 0
  **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

