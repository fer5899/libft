/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:09:19 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/11/30 17:09:42 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	@brief		Counts the number of characters in a string.
*
*	@param		s	String to count.
*
*	@return		Number of characters in s.
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
