/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imqandyl <imqandyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:44:04 by imqandyl          #+#    #+#             */
/*   Updated: 2024/07/25 11:36:20 by imqandyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
	{
		len += write(1, "0x0", 3);
		return (len);
	}
	else
	{
		len += write(1, "0x", 2);
		len += ft_printhex((unsigned long)ptr, 'x');
		return (len);
	}
}
