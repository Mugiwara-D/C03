/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:18:39 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/23 17:50:49 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
		int i;

		i = 0;
		while (str[i])
		{
			if(str[i] == to_find[i])
				return (to_find)
			i++;
		}
		return (ret);
}
#include <stdio.h>
int main()
{
	char str[] = "stringlol";
	char to_find[] = "lol";
	printf("dest is %s\n", ft_strstr(str,to_find));
	return 0;
}
