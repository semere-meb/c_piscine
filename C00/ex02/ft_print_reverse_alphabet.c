#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

// test

// int main() {
//     ft_print_reverse_alpahbet();
//     return (0);
// }
