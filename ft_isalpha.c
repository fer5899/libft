/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:57:48 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/11/30 16:14:29 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	@brief		Checks for an alphabetic character.
*
*	@param		c	Character to check.
*
*	@return		1 if c is an alphabetic character, 0 otherwise.
*/
int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
