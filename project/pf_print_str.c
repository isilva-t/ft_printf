/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <isilva-t@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:44:03 by isilva-t          #+#    #+#             */
/*   Updated: 2024/05/03 10:08:38 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_print_str(char *str)
{
	int	cont;

	cont = 0;
	while(str[cont])
	{
		pf_putchar(str[cont++]);
	}
	return (cont);
}
