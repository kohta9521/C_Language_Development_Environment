/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   88.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:26:33 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/09 17:27:57 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	add(int x, int y)
{
	int ans = x + y;
	return ans;
}

int	main(void)
{
	int year = 2022;
	add(year, 4);
	add(year, 50);

	return (0);
}
