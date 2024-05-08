/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <isilva-t@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:16:18 by isilva-t          #+#    #+#             */
/*   Updated: 2024/05/07 13:46:43 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	pf_print_str(char *str);
int	pf_putchar(int c);
int	pf_print_format(char spec, va_list *ap, int cont);
int	pf_put_nbr_base(long n, int base, int hex_cap);
int	pf_print_ptr(unsigned long long n, int cont);

#endif
