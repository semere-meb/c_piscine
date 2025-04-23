#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_print_str(char *str, int bytes)
{
	int	i;

	i = 0;
	while (i < bytes)
		write(1, &str[i++], 1);
}

int	ft_display_file(int fd)
{
	int		buf_size;
	char	buf[buf_size];
	int		bytes_read;

	buf_size = 30000;
	while ((bytes_read = read(fd, buf, buf_size)) > 0)
	{
		ft_print_str(buf, bytes_read);
	}
	return (bytes_read);
}

void	print_error(char *prog_name, char *file_name)
{
	write(2, file_name, ft_strlen(prog_name));
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

	prog_name = basename(argv[0]);
	if (argc == 1)
	{
		ft_display_file(1);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
			{
				print_error(prog_name, argv[i]);
				return (errno);
			}
			ft_display_file(fd);
		}
		i++;
	}
	return (errno);
}
