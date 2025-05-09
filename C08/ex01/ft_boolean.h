/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:46 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:46 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have an impair number of arguments.\n"
# define EVEN even

static inline int	even(int x)
{
	return (x % 2 == 0);
}

typedef int			t_bool;

#endif
