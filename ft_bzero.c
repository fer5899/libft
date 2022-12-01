/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:26:47 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/11/30 17:30:06 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	@brief		Fills the first n bytes of the memory area pointed to by s with
*				the constant byte 0.
*
*	@param		s	Pointer to the memory area to fill.
*	@param		n	Number of bytes to fill.
*
*	@return		Pointer to the memory area s.
*/
void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)0;
		i++;
	}
	return (ptr);
}
