/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:37 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:37 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*str_cpy;

	str_cpy = str;
	while (*str_cpy)
	{
		if (*str_cpy >= 'a' && *str_cpy <= 'z')
		{
			*str_cpy -= ('a' - 'A');
		}
		str_cpy++;
	}
	return (str);
}
