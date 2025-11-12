/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:51 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:51 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_display_file(char *file_name)
{
	char	buf[10];
	int		fd;
	int		size;

	size = 1;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (fd);
	while (size > 0)
	{
		size = read(fd, buf, 10);
		write(1, buf, size);
	}
	return (size);
}
