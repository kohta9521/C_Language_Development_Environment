/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   85.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:13:49 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/09 16:20:02 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef char String[1024];

void	hello(String name)
{
	printf("%sさん、こんにちは!\n");
}

int	main(void)
{
	printf("関数を呼び出します!\n");
	hello("岬");
	hello("赤城");
	hello("海堂");
	printf("関数の呼び出しが終わりました!\n");
	return (0);
}
