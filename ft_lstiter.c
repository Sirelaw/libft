/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:18:19 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/13 18:37:22 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiteri(t_list *lst, void(*f)(void *))
{
	t_list *p;
	t_list *temp;
	
	p = lst;
	temp = lst;
	while(temp != NULL)
	{
		temp = p->next;
		f(p);
		p = temp;
	}
}