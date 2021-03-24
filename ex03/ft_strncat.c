/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:04:54 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/24 10:46:19 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				a;
	int				b;
	unsigned int	i;

	a = 0;
	b = 0;
	i = 1;
	while (dest[a])
		a++;
	while (src[b] && i <= nb)
	{
		dest[a + b] = src[b];
		b++;
		if (src[b] == 0)
			dest[a + b] = '\0';
		i++;
	}
	return (dest);
}
