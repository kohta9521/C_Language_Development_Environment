/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   57.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:34:53 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 18:37:24 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	for (int i = 1; i < 10; i ++)
	{
		for (int j = 1; j < 10; j ++)
		{
			printf("%2d ", i * j);
		}
		printf("\n");
	}
	return (0);
}
