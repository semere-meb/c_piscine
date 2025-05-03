/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:42 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:42 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mid;

	mid = nb / 2;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	while (mid >= 0)
	{
		if (mid * mid == nb)
			return (mid);
		mid--;
	}
	return (0);
}
