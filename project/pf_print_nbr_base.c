/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_nbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <isilva-t@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:12:43 by isilva-t          #+#    #+#             */
/*   Updated: 2024/05/07 11:13:49 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_print_nbr_base(long n, int base, int hex_cap)
{
	int		cont;
	char	*cache;

	cont = 0;
	cache = "0123456789abcdef";

	if (n < 0)
	{
		pf_putchar('-');
		return (1 + pf_print_nbr_base(-n, base, hex_cap));
	}
	else if (n < base)
	{
		if (n > 9 && hex_cap == -32)
			return (pf_putchar(cache[n] + hex_cap));
		else
			return (pf_putchar(cache[n]));
	}
	else
	{
		cont += pf_print_nbr_base(n / base, base, hex_cap);
		return (cont + pf_print_nbr_base(n % base, base, hex_cap));
	}
}
