/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_digit.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imqandyl <imqandyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:43:32 by imqandyl          #+#    #+#             */
/*   Updated: 2024/07/25 10:36:22 by imqandyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_digit(unsigned int num)
{
	unsigned int	len;

	len = 0;
	if (num == 0)
	{
		ft_characters('0');
		return (1);
	}
	if (num > 9)
	{
		len += ft_print_unsigned_digit(num / 10);
	}
	ft_characters(num % 10 + '0');
	len++;
	return (len);
}
