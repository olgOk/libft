/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:18:22 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 21:26:46 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*pmem;

	pmem = (t_list *)malloc(sizeof(t_list) + 1);
	if (!pmem)
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		pmem->content = NULL;
		pmem->content_size = 0;
		pmem->next = NULL;
	}
	else
	{
		pmem->content = ft_memalloc(content_size);
		pmem->content = ft_memcpy(pmem->content, content, content_size);
		pmem->content_size = content_size;
		pmem->next = NULL;
	}
	return (pmem);
}
