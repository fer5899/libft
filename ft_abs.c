/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:50:21 by fgomez-d          #+#    #+#             */
/*   Updated: 2023/11/03 12:41:31 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This is a function for getting the absolute value of an integer
*/
int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
