/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez-d <fgomez-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:39:20 by fgomez-d          #+#    #+#             */
/*   Updated: 2022/12/06 14:09:21 by fgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*newcont;

	newlst = NULL;
	while (lst != NULL)
	{
		newcont = f(lst->content);
		if (newcont == NULL)
		{
			ft_lstclear(&newlst, del);
			break ;
		}
		newnode = ft_lstnew(newcont);
		if (newnode == NULL)
			return (NULL);
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
