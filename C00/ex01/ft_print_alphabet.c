/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:32 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:32 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
