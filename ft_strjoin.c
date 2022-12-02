/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:37:46 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/12/02 14:19:16 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*catstr;

	catstr = (char *) calloc(ft_strlen(s1) + ft_strlen(s2), sizeof(char));
	if (catstr == NULL)
		return (NULL);
	ft_strlcpy(catstr, s1, ft_strlen(s1));
	ft_strlcat(catstr, s2, ft_strlen(s1) + ft_strlen(s2));
	return (catstr);
}
