/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:14:12 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/12/05 20:05:28 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Counts the number of words in the string str separated by delim
*/
static int	count_words(const char *str, char delim)
{
	int		nwords;
	char	*tstr;

	nwords = 0;
	tstr = ft_strtrim(str, &delim);
	while (*tstr != '\0')
	{
		while (*tstr != '\0' && *tstr == delim)
			tstr++;
		while (*tstr != '\0' && *tstr != delim)
			tstr++;
		nwords++;
	}
	return (nwords);
}

/*
	Takes the string pstr passed by reference and moves the pointer to the start
	of the first word it finds, ignoring all delim chars it finds.
*/
static int	find_next_word(const char **pstr, char delim)
{
	int	wlen;

	wlen = 0;
	while (**pstr != '\0' && **pstr == delim)
		*pstr += 1;
	if (**pstr == '\0')
		return (0);
	while ((*pstr)[wlen] != '\0' && (*pstr)[wlen] != delim)
		wlen += 1;
	return (wlen);
}

char	**ft_split(char const *s, char c)
{
	char	**strtab;
	int		nwords;
	int		wi;
	int		wlen;

	nwords = count_words(s, c);
	strtab = (char **) ft_calloc(nwords + 1, sizeof(char *));
	if (strtab == NULL)
		return (NULL);
	strtab[nwords] = NULL;
	if (nwords == 0)
		return (strtab);
	wi = 0;
	while (wi < nwords)
	{
		wlen = find_next_word(&s, c);
		strtab[wi] = (char *) calloc(wlen + 1, sizeof(char));
		if (strtab[wi] == NULL)
			return (NULL);
		ft_strlcpy(strtab[wi], s, wlen + 1);
		wi++;
	}	
	return (strtab);
}

#include <stdio.h>

int	main(void)
{
	char	*str = " Hola  me llamo";
	find_next_word(&str, ' ');
	printf("%s\n", str);
	find_next_word(&str, ' ');
	printf("%s\n", str);
	find_next_word(&str, ' ');
	printf("%s\n", str);
}