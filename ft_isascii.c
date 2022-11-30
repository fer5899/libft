/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:09:20 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/11/30 16:10:13 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	@brief		Checks for an ASCII character.
*
*	@param		c	Character to check.
*
*	@return		1 if c is an ASCII character, 0 otherwise.
*/
int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
