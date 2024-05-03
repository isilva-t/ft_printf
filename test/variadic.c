#include <stdarg.h>
#include <stdio.h>


float	average(int n, ...)
{
	va_list	arg_ptr;
	int	total;
	int	i;

	va_start(arg_ptr, n);
	total = 0;
	i = 0;

	while (i < n)
	{
		total = total + va_arg(arg_ptr, int);
		i++;
	}
	return ((float)total / n);

}

int	main()
{
	float	average_age;
						//this first digit is a flag
	average_age = average(3, 			10, 15, 20);

	printf("The average age is %f\n", average_age);
}

// va_list ap - declare my va pointer
// va_start(ap, num) - tels to start pointer to argument, and hou many arguments we have
// va_arg(ap, int) - iterates each argument on VA, and NEED TO TELL WHAT TYPE OF ARGUMENT.
// va_end(ap) - define that has not many arguments to iterate (or define i guess)
