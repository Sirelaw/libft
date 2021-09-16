/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:18:28 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 17:45:53 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;
	t_list	*temp;
	int		len;

	len = 0;
	temp = lst;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	newlist = malloc((len + 1) * sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	temp = len;
}