#include <fcntl.h>
#include <unistd.h>

void	ft_print_str(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
		write(1, &str[i++], 1);
}

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
		ft_print_str(buf, size);
	}
	return (size);
}
