/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:06:55 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/11 15:10:01 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int n1, n2, n3;

	puts("三つの整数を入力してください。");

	printf("整数1 : ");	scanf("%d", &n1);
	printf("整数2 : ");	scanf("%d", &n2);
	printf("整数3 : ");	scanf("%d", &n3);

	int wa = n1 + n2 + n3;
	printf("それらの和は%dです。\n", wa);

	return (0);
}