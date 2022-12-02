/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:00:30 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/12/02 18:07:35 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*tstr;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != NULL && s1[start] != '\0')
		start++;
	while (ft_strchr(set, s1[end]) != NULL && end > 0 && end > start)
		end--;
	tstr = (char *) ft_calloc(end - start + 2, sizeof(char));
	if (tstr == NULL)
		return (NULL);
	ft_strlcpy(tstr, s1 + start, end - start + 2);
	return (tstr);
}
