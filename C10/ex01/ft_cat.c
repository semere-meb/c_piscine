/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:52 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:52 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <string.h>
#include <unistd.h>

#define BUFF_SIZE 30000

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_display_file(int fd)
{
	char	buf[BUFF_SIZE];
	int		bytes_read;
	int		ret_code;

	bytes_read = 1;
	ret_code = 0;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFF_SIZE);
		if (bytes_read > 0)
			write(1, buf, bytes_read);
		else
			ret_code = close(fd);
	}
	return (ret_code);
}

void	print_error(char *prog_name, char *file_name)
{
	write(2, prog_name, ft_strlen(prog_name));
	write(2, ": ", 2);
	write(2, file_name, ft_strlen(file_name));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*prog_name;
	int		i;
	int		ret_code;

	prog_name = basename(argv[0]);
	if (argc == 1)
		ret_code = ft_display_file(1);
	else
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
			{
				print_error(prog_name, argv[i++]);
				return (errno);
			}
			ret_code = ft_display_file(fd);
		}
	}
	return (ret_code);
}
