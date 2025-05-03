/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:53 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:53 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include <fcntl.h>
#include <libgen.h>

int	main(int argc, char **argv)
{
	int	fd;
	int	i;
	int	byte_len;

	i = 1;
	byte_len = get_param_value(&argc, &argv, "-c", 125);
	if (byte_len == -1)
		return (-1);
	if (argc == 1)
		return (display_file(0, byte_len));
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
		{
			print_error(basename(argv[0]),
						ft_replace("cannot open\
					% for reading",
									argv[i]),
						3);
			return (1);
		}
		display_file(fd, byte_len);
		i++;
	}
	return (0);
}
