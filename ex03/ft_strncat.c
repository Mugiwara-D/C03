/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderuell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:04:54 by mderuell          #+#    #+#             */
/*   Updated: 2021/03/24 15:25:32 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				a;
	int				b;
	unsigned int	i;

	a = 0;
	b = 0;
	i = 0;
	while (dest[a])
		a++;
	while (src[b] && i < nb)
	{
		dest[a + b] = src[b];
		b++;
		i++;
	}
	dest[a + b] = '\0';
	return (dest);
}
