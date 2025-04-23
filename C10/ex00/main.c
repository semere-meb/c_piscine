#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	int	errcode;

	if (argc < 2)
		ft_print_str("File name missing.");
	if (argc > 2)
		ft_print_str("Too many arguments.");
	errcode = ft_display_file(argv[1]);
	if (errcode != 0)
		ft_print_str("Cannot read file.");
	return (errcode);
}
