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
			cont += write(1, &s[i], 1);
		i++;
	}
	va_end(ap);
	return (cont);
}
/*
int	main(void)
{
	int	cont;
	
	cont = 0;
	
	cont = ft_printf("%c	", 'c');
	ft_printf("my: %i\n", cont);
	   cont = printf("%c	", 'c');
	printf("OR: %i\n", cont);
	
	cont = ft_printf(" p %p	", (void *)321321321321321);
	ft_printf("MY: %i\n", cont);
	   cont = printf(" p %p	", (void *)321321321321321);
	printf("OR: %i\n", cont);	

	cont = ft_printf(" p %p	%p ", 0, 0);
	ft_printf("MY: %i\n", cont);
	   cont = printf(" p %p	%p ", 0, 0);
	printf("OR: %i\n", cont);

	cont = ft_printf("  d %d	", 31313131);
	ft_printf("MY: %i\n", cont);
	   cont = printf("  d %d	", 31313131);
	printf("OR: %i\n", cont);	

	cont = ft_printf("   s %s	", "string");
	ft_printf("MY: %i\n", cont);
	   cont = printf("   s %s	", "string");
	printf("OR: %i\n", cont);

	cont = ft_printf("    i %i	", -1);
	ft_printf("MY: %i\n", cont);
	   cont = printf("    i %i	", -1);
	printf("OR: %i\n", cont);

	cont = ft_printf("     u %u	", 0);
	ft_printf("MY: %i\n", cont);
	   cont = printf("     u %u	", 0);
	printf("OR: %i\n", cont);
	
	cont = ft_printf("      X %X	", 31);
	ft_printf("MY: %i\n", cont);	
	   cont = printf("      X %X	", 31);
	printf("OR: %i\n", cont);

	cont = ft_printf("       x %x	", 31);
	ft_printf("MY: %i\n", cont);	
	   cont = printf("       x %x	", 31);
	printf("OR: %i\n", cont);
	
	cont = ft_printf("        %%	");
	ft_printf("MY: %i\n", cont);
	   cont = printf("        %%	");
	printf("OR: %i\n", cont);
	
	cont = ft_printf("apenas texto, sem va's	");
	ft_printf("MY: %i\n", cont);
	   cont = printf("apenas texto, sem va's	");
	printf("OR: %i\n", cont);
	
}*/
