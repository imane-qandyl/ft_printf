/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imqandyl <imqandyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:44:00 by imqandyl          #+#    #+#             */
/*   Updated: 2024/07/25 11:05:44 by imqandyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int num, char hex_case)
{
	int	len;

	len = 0;
	if (num >= 0 && num <= 9)
		len += ft_characters(num + '0');
	else if (num >= 10 && num <= 15 && hex_case == 'x')
		len += ft_characters(num - 10 + 'a');
	else if (num >= 10 && num <= 15 && hex_case == 'X')
		len += ft_characters(num - 10 + 'A');
	return (len);
}

int	ft_printhex(unsigned long num, char hex_case)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_printhex(num / 16, hex_case);
		len += ft_printhex(num % 16, hex_case);
	}
	else
		len += ft_hex(num, hex_case);
	return (len);
}
