#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	curr;

	curr = 'a';
	while (curr <= 'z')
	{
		write(1, &curr, 1);
		curr++;
	}
}

// int main() {
//     ft_print_alphabet();
//     return (0);
// }
