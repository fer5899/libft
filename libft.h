/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:12:48 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/12/02 14:10:17 by fgomez-d         ###   ########.fr       */
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

/*
*	@brief		Looks for the first occurrence of the character c in the 
*				string s. Returns NULL if the character was not found.
*
*	@param		s	String to be searched.
*	@param		c	Character to be searched for.
*
*	@return		Pointer to the first occurrence of the character c in the 
*				string s. Returns NULL if the character was not found.
*/
char	*ft_strchr(const char *s, int c);

/*
*	@brief		Looks for the last occurrence of the character c in the 
*				string s.
*
*	@param		s	String to be searched.
*	@param		c	Character to be searched for.
*
*	@return		Pointer to the last occurrence of the character c in the
*				string s.
*/
char	*ft_strrchr(const char *s, int c);

/*
*	@brief		Compares the first n chars of the strings s1 and s2.
*
*	@param		s1	Pointer to the first string to be compared.
*	@param		s2	Pointer to the second string to be compared.
*	@param		n	Number of chars to be compared.
*
*	@return		0 if the strings are equal, a negative number if the first
*				different char in s1 is less than the first different char in
*				s2, a positive number if the first different char in s1 is
*				greater than the first different char in s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*
*	@brief		Looks for the first instance of c in the first n bytes of 
*				memory starting from s. If no instance is found, returns NULL.
*				
*
*	@param		s	Area of memory to be searched.
*	@param		c	Character to be searched for in memory.
*	@param		n	Number of bytes to be searched.
*
*	@return		Pointer to the first instance of c in the first n bytes of
*				memory starting from s. If no instance is found, returns NULL.
*/
void	*ft_memchr(const void *s, int c, size_t n);

/*
*	@brief		Compares the first n bytes of s1 and s2 areas of memory,
*				interpreting each byte as unsigned char.
*
*	@param		s1	Pointer to the first area of memory to be compared.
*	@param		s2	Pointer to the second area of memory to be compared.
*	@param		n	Number of bytes to be compared.
*
*	@return		0 if the areas of memory are equal, a negative number if the 
*				first different byte in s1 is less than the first different 
*				byte in s2, a positive number if the first different byte in 
*				s1 is greater than the first different byte in s2.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*
*	@brief		Locates the first occurrence of the null-terminated
*    			string to_find in the null-terminated string str.
*
*	@param		str			String to be searched.
*	@param		to_find		String to be searched for.
*
*	@return		Pointer to the first occurrence of the null-terminated
*    			string to_find in the null-terminated string str. If the
*				string to_find is not found, returns NULL. If to_find is an
*				empty string, returns str.
*/
char	*ft_strnstr(const char	*str, const char *to_find, size_t len);

/*
*	@brief		Converts the initial portion of the string pointed to by
*				str to int. Discards any whitespace characters until the
*				first non-whitespace character is found. Then takes as many
*				characters as possible to form a valid integer representation
*				and converts them to an integer. The string can contain
*				optional plus or minus sign. If the first sequence of
*				non-whitespace characters in str is not a valid integral
*				number, or if no such sequence exists because either str is
*				empty or it contains only whitespace characters, no conversion
*				is performed and zero is returned.
*
*	@param		str		String to be converted to int.
*
*	@return		The converted integral number as an int value. If no valid
*				conversion could be performed, a zero value is returned.
*/
int		ft_atoi(const char *str);

/*
*	@brief		Allocates memory for an array of nmemb elements of size bytes 
*				each and returns a pointer to the allocated memory. The memory 
*				is set to zero. If nmemb or size is 0, then calloc() returns 
*				unique pointer value that can later be successfully passed
*				to free().
*
*	@param		nmemb	Number of elements to be allocated.
*	@param		size	Size of each element.
*
*	@return		Pointer to the allocated memory. If the function fails, it
*				returns NULL.
*/
void	*ft_calloc(size_t nmemb, size_t size);

/*
*	@brief		Returns a pointer to a new string which is a duplicate of
*        		the string str.  Memory for the new string is obtained with 
*      			malloc(3), and can be freed with free(3).
*
*	@param		str		String to be duplicated.
*
*	@return		Pointer to the duplicated string. If the function fails, it
*				returns NULL.
*/
char	*ft_strdup(const char *str);

/*
*	@brief		Creates a substring of the string s. Memory for the new string  
*      			is obtained with malloc(3), and can be freed with free(3). The
*				substring starts from index start and has a maximum length of
*				len.
*
*	@param		s		String to extract the substring from.
*	@param		start	Index to start the substring from.
*	@param		len		Maximum length of the substring.
*
*	@return		Pointer to the substring. If the function fails, it returns NULL.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
*	@brief		Creates a new string allocating memory with malloc(3) joining
*				strings s1 and s2.
*
*	@param		s1	First string to be joined.
*	@param		s2	Second string to be joined.
*
*	@return		Pointer to the string created from joining strings s1 and s2.
*/
char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

#endif