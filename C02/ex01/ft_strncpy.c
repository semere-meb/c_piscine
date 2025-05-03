/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:36 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:36 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_original;
	unsigned int	i;

	dest_original = dest;
	i = 0;
	while (i < n && *src)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n && *dest)
	{
		*dest++ = '\0';
		i++;
	}
	return (dest_original);
}
