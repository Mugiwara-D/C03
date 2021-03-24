/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:18:39 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/24 15:30:08 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (to_find[j] == 0)
			return (str);
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == 0)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
