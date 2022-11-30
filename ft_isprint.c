/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:10:33 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/11/30 16:10:56 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	@brief		Checks for any printable character including space.
*
*	@param		c	Character to check.
*
*	@return		1 if c is a printable character, 0 otherwise.
*/
int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
