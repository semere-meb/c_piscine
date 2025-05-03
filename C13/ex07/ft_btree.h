typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

typedef struct s_queue
{
	t_btree			*node;
	int				level;
	struct s_queue	*next;
}					t_queue;
