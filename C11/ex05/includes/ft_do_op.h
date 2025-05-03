/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:55 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:55 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

int		parse_int(char *str);
int		get_op(char *str);
void	print_nbr(int n);
void	print_str(char *str);
int		is_valid(char **argv);

int		add(int a, int b);
int		multiply(int a, int b);
int		subtract(int a, int b);
int		divide(int a, int b);
int		modulo(int a, int b);

#endif // !FT_DO_OP_H
