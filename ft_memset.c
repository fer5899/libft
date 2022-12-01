/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:10:04 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/11/30 17:16:10 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	@brief		Fills the first n bytes of the memory area pointed to by s with
*				the constant byte c.
*
*	@param		s	Pointer to the memory area to fill.
*	@param		c	Constant byte to fill the memory area with.
*	@param		n	Number of bytes to fill.
*
*	@return		Pointer to the memory area s.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
