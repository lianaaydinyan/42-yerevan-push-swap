#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#define PI 3.14566645

typedef struct s_stack
{
    int             i;
    int             data;
    struct s_stack *next;
    struct s_stack *prev;
}t_stack;

// void sa(t_lsit *list1,t_list *list2);

typedef struct s_table
{
    int     len;
    char    *parsed_string;
    int     *unsorted;
    int     *sotred_idx;

}   t_table;

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../libft/libft.h"

void	failure();
int param_sum(char **str);
void indexavorel(char **str,t_table *table2,int argc);
int print_args(char **str);
t_table	*init_table(void);
int		parser(char **str, t_table **tab);
char	*join_arguments(char *s1, int delimiter, char *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *a);
#endif