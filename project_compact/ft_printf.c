/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <isilva-t@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:07:54 by isilva-t          #+#    #+#             */
/*   Updated: 2024/05/07 13:45:44 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	pf_print_str(char *str)
{
	int	cont;

	if (!str)
		str = "(null)";
	cont = 0;
	while (str[cont])
	{
		pf_putchar(str[cont]);
		cont++;
	}
	return (cont);
}

int	pf_print_format(char spec, va_list *ap, int cont)
{
	if (spec == 'c')
		cont += pf_putchar(va_arg(*ap, int));
	else if (spec == 'p')
		cont += pf_print_ptr(va_arg(*ap, unsigned long long), 0);
	else if (spec == 'd' || spec == 'i')
		cont += pf_put_nbr_base((long)va_arg(*ap, int), 10, 0);
	else if (spec == 's')
		cont += pf_print_str(va_arg(*ap, char *));
	else if (spec == 'u')
		cont += pf_put_nbr_base((unsigned int)va_arg(*ap, unsigned int), 10, 0);
	else if (spec == 'X')
		cont += pf_put_nbr_base((long)va_arg(*ap, unsigned int), 16, -32);
	else if (spec == 'x')
		cont += pf_put_nbr_base((long)va_arg(*ap, unsigned int), 16, 0);
	else if (spec == '%')
		cont += pf_putchar('%');
	else
		return (0);
	return (cont);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		cont;
	int		i;

	va_start(ap, s);
	cont = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			cont += pf_print_format(s[++i], &ap, 0);
		else
			cont += pf_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (cont);
}
/*
int	main(void)
{	
	printf ("  MY: %i\n", ft_printf("%: %%"));
	printf ("  OR: %i\n",    printf("%: %%"));
printf ("  MY: %i\n", ft_printf("%c	", 'c'));
printf ("  OR: %i\n",    printf("%c	", 'c'));
	printf ("  MY: %i\n", ft_printf(" p %p	", (void *)321321321321321));
	printf ("  OR: %i\n",    printf(" p %p	", (void *)321321321321321));
printf ("  MY: %i\n", ft_printf(" p %p	%p ", 0, 0));
printf ("  OR: %i\n",    printf(" p %p	%p ", 0, 0));
	printf ("  MY: %i\n", ft_printf("  d %d	", 31313131));
	printf ("  OR: %i\n",    printf("  d %d	", 31313131));
printf ("  MY: %i\n", ft_printf("   s %s	", "string"));
printf ("  OR: %i\n",    printf("   s %s	", "string"));
	printf ("  MY: %i\n", ft_printf("    i %i	", -1));
	printf ("  OR: %i\n",    printf("    i %i	", -1));
printf ("  MY: %i\n", ft_printf("    i %i	", -2147483648));
printf ("  OR: %i\n",    printf("    i %i	", -2147483648));
	printf ("  MY: %i\n", ft_printf("    i %i	", 2147483647));
	printf ("  OR: %i\n",    printf("    i %i	", 2147483647));
printf ("  MY: %i\n", ft_printf("     u %u	", 4294967295));
printf ("  OR: %i\n",    printf("     u %u	", 4294967295));
	printf ("  MY: %i\n", ft_printf("     u %u	", 543487));
	printf ("  OR: %i\n",    printf("     u %u	", 543487));
printf ("  MY: %i\n", ft_printf("     u %u	", 0));
printf ("  OR: %i\n",    printf("     u %u	", 0));
	printf ("  MY: %i\n", ft_printf("      X %X	", 31));
	printf ("  OR: %i\n",    printf("      X %X	", 31));
printf ("  MY: %i\n", ft_printf("       x %x	", 31));
printf ("  OR: %i\n",    printf("       x %x	", 31));
	printf ("  MY: %i\n", ft_printf("only text, only text!	"));
	printf ("  OR: %i\n",    printf("only text, only text!	"));
printf ("M %i\n", ft_printf("MX %c %p %d %s\n", 'c', (void *)32132, 313, "str"));
printf ("O %i\n", printf("MX %c %p %d %s\n", 'c', (void *)32132, 313, "str"));
printf ("MY: %i\n", ft_printf("MIX 2%i %u %X %x %%\n", -313, 31313131, 31, 31));
printf ("OR: %i\n", printf("MIX 2%i %u %X %x %%\n", -313, 31313131, 31, 31));
}*/
