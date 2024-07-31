/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_characters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imqandyl <imqandyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:43:28 by imqandyl          #+#    #+#             */
/*   Updated: 2024/07/25 11:45:41 by imqandyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_characters(int c)
{
	int	result;

	result = write(1, &c, 1);
	if (result == -1)
	{
		return (-1);
	}
	return (1);
}
