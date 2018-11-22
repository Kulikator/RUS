/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirafe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:56:33 by sirafe            #+#    #+#             */
/*   Updated: 2018/11/21 15:10:29 by sirafe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (0);
	a = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
