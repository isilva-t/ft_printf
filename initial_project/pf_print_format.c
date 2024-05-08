/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <isilva-t@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:47:09 by isilva-t          #+#    #+#             */
/*   Updated: 2024/05/07 13:45:11 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_print_format(char spec, va_list *ap, int cont)
{
	if (spec == 'c')
		cont += pf_putchar(va_arg(*ap, int));
	else if (spec == 'p')
		cont += pf_print_ptr(va_arg(*ap, unsigned long long), 0);
	else if (spec == 'd')
		cont += pf_put_nbr_base((long)va_arg(*ap, int), 10, 0);
	else if (spec == 's')
		cont += pf_print_str(va_arg(*ap, char *));
	else if (spec == 'i')
		cont += pf_put_nbr_base((long)va_arg(*ap, int), 10, 0);
	else if (spec == 'u')
		cont += pf_put_nbr_base((unsigned int)va_arg(*ap, unsigned int), 10, 0);
	else if (spec == 'X')
		cont += pf_put_nbr_base((long)va_arg(*ap, unsigned int), 16, -32);
	else if (spec == 'x')
		cont += pf_put_nbr_base((long)va_arg(*ap, unsigned int), 16, 0);
	else
		cont += write(1, &spec, 1);
	return (cont);
}
