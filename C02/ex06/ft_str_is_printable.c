/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:14:32 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/02 13:14:06 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		if (*str <= '!' && *str >= '~')
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
