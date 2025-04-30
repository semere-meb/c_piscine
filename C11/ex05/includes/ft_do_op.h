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
