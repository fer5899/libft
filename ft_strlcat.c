/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:24:25 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/12/01 15:09:16 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	@brief		Appends string src to the end of dst. It will append at most
*				size - strlen(dst) - 1 bytes, NUL-terminating the result.
*
*	@param		dst		Pointer to the destination array where the content is to
*						be copied, type-casted to a pointer of type char*. The
*						string pointed to by src is appended to the end of the
*						string pointed to by dst. The initial character of src
*						overwrites the null character at the end of dst.
*	@param		src		Pointer to the source of data to be copied, type-casted
*						to a pointer of type char*.
*	@param		size	Maximum number of bytes to be used in the destination
*						array dst. The size of the resulting string in dst is
*						always less than or equal to size.
*
*	@return		The total length of the string they tried to create.
*/
int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		destlen;

	i = 0;
	destlen = ft_strlen(dest);
	if (size > destlen)
	{
		while (*dest != '\0')
			dest++;
		while (src[i] != '\0' && i < size - destlen - 1)
			*(dest++) = src[i++];
		*dest = '\0';
	}
	if (size < destlen)
		destlen = size;
	return ((int) destlen + ft_strlen(src));
}
