/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dafranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:27:50 by dafranco          #+#    #+#             */
/*   Updated: 2022/11/13 22:36:30 by dafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include"ft_printf.h"
// #include"libft.h"
#include<stdio.h>

int	main()
{
	char c = 'c';
	char str[] = "\0";
	int i = 10;
	long long int y = 9999999999999;
	unsigned long int x = 01010101001;

	printf("printf = %d chars\n", printf("%s", str));
//	ft_printf("ton printf = %d chars\n", ft_printf("%s", str));
	return(0);
}
