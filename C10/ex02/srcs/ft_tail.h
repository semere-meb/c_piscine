#ifndef FT_TAIL_H
#define FT_TAIL_H

int read_file(char *buffer, int fd, int bytes, int *total_read);
int display_file(int fd, int bytes);
int str_to_int(char *str, char ***argv_ptr);
void clean_argv(char ***argv_ptr, int *argc_ptr, int index);
int ft_strcmp(char *s1, char *s2);
int get_param_value(int *argc_ptr, char ***argv_ptr, char *param, int def_val);
char *ft_replace(char *templ, char *value);
void print_error(char *prog_name, char *msg, int msg_count);

#endif // !FT_TAIL_H
