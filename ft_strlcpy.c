/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:58:18 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/12/01 13:21:23 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	@brief		Copies up to size - 1 characters from the NUL-terminated string
*				src to dst, NUL-terminating the result.
*
*	@param		dst		Pointer to the destination array where the content is to
*						be copied, type-casted to a pointer of type char*.
*	@param		src		Pointer to the source of data to be copied, type-casted 
*						to a pointer of type char*. The content of the array
*						pointed by src is copied to the array pointed by dst.
*	@param		size	Maximum number of bytes to be used in the destination
*						array dst. The size of the resulting string in dst is
*						always less than or equal to size.
*
*	@return		The total length of the string they tried to create.
*/
int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
