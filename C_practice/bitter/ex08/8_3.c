/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:55:04 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/01 23:58:50 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int age;
	printf("年齢:");
	scanf("%d", &age);
	if (age <= 3) {
		printf("幼児:無料\n");
	} else if (age <= 12) {
		printf("子供:250円\n");
	} else {
		printf("大人:400円\n");
	}
	return (0);
}
