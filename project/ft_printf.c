/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <isilva-t@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:27:07 by isilva-t          #+#    #+#             */
/*   Updated: 2024/05/03 10:11:04 by isilva-t         ###   ########.fr       */
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
	while(s[i] != '\0')
	{
		if (s[i] == '%')
		{
			cont += pf_print_format(s[++i], &ap);
		}
		else
			cont += write(1, &s[i], 1);
		i++;
	}
	va_end(ap);
	return (cont);
}

int	main(void)
{
	int	cont;
	
	cont = 0;
	
	cont = ft_printf("%c\n", 'c');
	ft_printf("my c:%i\n", cont);
	cont = printf("%c\n", 'c');
	printf("OR:%i\n\n", cont);
	
	cont = ft_printf("teste p %p\n", (void *)3131313131313131);
	ft_printf("MY: %i\n", cont);
	cont = printf("teste p %p\n", (void *)3131313131313131);
	printf("OR: %i\n\n", cont);	
	
	cont = ft_printf("teste d %d\n", 31);
	ft_printf("MY: %i\n", cont);
	cont = printf("teste d %d\n", 31);
	printf("OR: %i\n\n", cont);	

	cont = ft_printf("teste s %s\n", "string");
	ft_printf("MY: %i\n", cont);
	cont = printf("teste s %s\n", "string");
	printf("OR: %i\n\n", cont);

	cont = ft_printf("teste i %i\n", 31);
	ft_printf("MY: %i\n", cont);
	cont = printf("teste i %i\n", 31);
	printf("OR: %i\n\n", cont);

	cont = ft_printf("teste u %u\n", 31);
	ft_printf("MY: %i\n", cont);
	cont = printf("teste u %u\n", 31);
	printf("OR: %i\n\n", cont);
	
	cont = ft_printf("teste X %X\n", 31);
	ft_printf("MY: %i\n", cont);	
	cont = printf("teste X %X\n", 31);
	printf("OR: %i\n\n", cont);

	cont = ft_printf("teste x %x\n", 31);
	ft_printf("MY: %i\n", cont);	
	cont = printf("teste x %x\n", 31);
	printf("OR: %i\n\n", cont);
	
	cont = ft_printf("teste %%\n");
	ft_printf("MY: %i\n", cont);
	cont = printf("teste %%\n");
	printf("OR: %i\n\n", cont);
	
	cont = ft_printf("teste apenas texto, sem va's\n");
	ft_printf("MY: %i\n", cont);
	cont = printf("teste apenas texto, sem va's\n");
	printf("OR: %i\n\n", cont);
	
}
