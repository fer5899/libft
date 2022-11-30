/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:08:07 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/11/30 16:14:32 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	@brief		Checks for an alphanumeric character.
*
*	@param		c	Character to check.
*
*	@return		1 if c is an alphanumeric character, 0 otherwise.
*/
int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') \
	|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}
