/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:12:48 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/12/01 15:30:59 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
*	@brief		Checks for an alphabetic character.
*
*	@param		c	Character to check.
*
*	@return		1 if c is an alphabetic character, 0 otherwise.
*/
int		ft_isalpha(int c);

/*
*	@brief		Checks for a digit (0 through 9).
*
*	@param		c	Character to check.
*
*	@return		1 if c is a digit, 0 otherwise.
*/
int		ft_isdigit(int c);

/*
*	@brief		Checks for an alphanumeric character.
*
*	@param		c	Character to check.
*
*	@return		1 if c is an alphanumeric character, 0 otherwise.
*/
int		ft_isalnum(int c);

/*
*	@brief		Checks for an ASCII character.
*
*	@param		c	Character to check.
*
*	@return		1 if c is an ASCII character, 0 otherwise.
*/
int		ft_isascii(int c);

/*
*	@brief		Checks for any printable character including space.
*
*	@param		c	Character to check.
*
*	@return		1 if c is a printable character, 0 otherwise.
*/
int		ft_isprint(int c);

/*
*	@brief		Counts the number of characters in a string.
*
*	@param		s	String to count.
*
*	@return		Number of characters in s.
*/
int		ft_strlen(const char *s);

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
void	*ft_memset(void *s, int c, size_t n);

/*
*	@brief		Fills the first n bytes of the memory area pointed to by s with
*				the constant byte 0.
*
*	@param		s	Pointer to the memory area to fill.
*	@param		n	Number of bytes to fill.
*
*	@return		Pointer to the memory area s.
*/
void	*ft_bzero(void *s, size_t n);

/*
*	@brief		Copies n bytes from memory area src to memory area dest.
*
*	@param		dest	Pointer to the destination memory area.
*	@param		src		Pointer to the source memory area.
*	@param		n		Number of bytes to copy.
*
*	@return		Pointer to the destination memory area dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
*	@brief		Copies len bytes from string src to string dst. The two strings
*				may overlap; the copy is always done in a non-destructive
*				manner.
*
*	@param		dst	Pointer to the destination array where the content is to
*					be copied, type-casted to a pointer of type void*.
*	@param		src	Pointer to the source of data to be copied, type-casted to
*					a pointer of type void*. The content of the array pointed by
*					src is copied to the array pointed by dst.
*	@param		n	Number of bytes to copy.
*
*	@return		Pointer to the destination array dst.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);

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
int		ft_strlcpy(char *dest, const char *src, size_t size);

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
int		ft_strlcat(char *dest, const char *src, size_t size);

/*
*	@brief		Converts char c to uppercase letter in case of being a
*				lowercase letter.
*
*	@param		c	Char to be converted to uppercase.
*
*	@return		Char c converted to uppercase if it was lowercase, char
*				c otherwise.
*/
int		ft_toupper(int c);

/*
*	@brief		Converts char c to lowercase letter in case of being a
*				uppercase letter.
*
*	@param		c	Char to be converted to lowercase.
*
*	@return		Char c converted to lowercase if it was uppercase, char
*				c otherwise.
*/
int		ft_tolower(int c);

#endif