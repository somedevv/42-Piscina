/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:09:12 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/02 13:18:05 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			a++;
		}
		*str++;
	}
	if (a > 0)
	{
		return (0);
	}
	else
		return (1);
}
