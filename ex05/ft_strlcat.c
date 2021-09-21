/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:13:09 by chpark            #+#    #+#             */
/*   Updated: 2021/09/21 17:23:41 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dl = i;
	j = 0;
	while (src[i] != '\0')
		j++;
	sl = j;
	i = 0;
	while ((src[i] != '\0') && i < size - dl - 1)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	if (size < dl)
		return (sl + size);
	else
		return (sl + dl);
}
