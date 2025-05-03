/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:55 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:55 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	res;
	int	a;
	int	b;
	int	op;
	int	(*ops[5])(int, int);

	ops[0] = add;
	ops[1] = multiply;
	ops[2] = subtract;
	ops[3] = divide;
	ops[4] = modulo;
	if (argc == 4)
	{
		res = 0;
		a = parse_int(argv[1]);
		b = parse_int(argv[3]);
		op = get_op(argv[2]);
		if (is_valid(argv) && op != -1)
			res = ops[op](a, b);
		print_nbr(res);
		write(1, "\n", 1);
	}
}
