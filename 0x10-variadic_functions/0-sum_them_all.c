#include "variadic_functions.h"

/**
 * sum_them_all - Function that sums the arguments passed to it
 * @n: first parameter
 * @...: indefinite number of parameters
 * Return: the sum of these arguments
 * Before we sum the arguments we have to access them in 3-4 steps
 * step 1 - declare a variable of type va_list in the variadic function
 * step 2 - call the macro va_start with 2 arguments, first is the
 * variable declared of the type va_list; the second is the name
 * of the last named parameter of the function, in our case n
 * step 3 - Each invocation of the va_arg macro yields the
 * next argument. The first argument to va_arg is the va_list
 * and the second is the TYPE of the next argument passed to the
 * function.
 * step 4 - clean up with the va_end macro before the function returns
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, counter;
	/*step 1*/
	va_list va;

	/*step 2*/
	va_start(va, n);

	sum = 0;

	for (counter = 0; counter < n; counter++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			/*step 3*/
			sum += va_arg(va, int);
		}
	}
	/*step 4*/
	va_end(va);
	return (sum);
}
