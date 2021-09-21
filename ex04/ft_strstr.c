/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:47:25 by chpark            #+#    #+#             */
/*   Updated: 2021/09/21 17:09:00 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;
	int		i;

	i = 0;
	if (to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		a = str + i;
		b = to_find;
		if (*a == *b)
		{
			while (*a == *b && *b == '\0')
			{
				a++;
				b++;
				if (*b == '\0')
					return (str + i);
			}
		}
		i++;
	}
	return ((void *)(0));
}
