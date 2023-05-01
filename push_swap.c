/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaydiny <liaydiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 01:29:41 by liaydiny          #+#    #+#             */
/*   Updated: 2023/05/01 21:13:32 by liaydiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void indexavorel(char **str,t_table *table2,int argc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	table2->unsorted = (int *)malloc(sizeof(int) * argc);
	while (str[i])
	{
		table2->unsorted[j] = i;
		j++;
		i++;
	}
//	return(tab);
// printf("barev");
}
int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_table	*table;
	t_table table2;

	a = NULL;
	b = NULL;
	int argc = param_sum(av);
	 printf("---%d---\n",argc);
	if (ac == 1)
		failure();
	table = init_table();
	//////
	int k = 0;
	indexavorel(av ,&table2,argc);
	while(k < argc)
	{
		printf("%d",table2.unsorted[k]);
		k++;	
	}	
	if (!parser(av, &table))
		failure();
	else
	{
		printf("%s\n",table->parsed_string);
	}
	return(0);
}

int param_sum(char **str)
{
	int i ;

	i = 1;
	while(str[i])
	{
		i++;
	}
	return(i  - 1);
}


int *sorrt_array(int *arr)
{
	int i ;
	
	i = 0;
	int tmp = arr[i];
	while(arr[i])
	{
		if(arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				i = 0; 
			}
		i++;
	}
	return(arr);
}

t_table	*init_table(void)
{
	t_table *tab;
	tab = malloc(sizeof(t_table));
	tab->len = 0;
	tab->parsed_string = NULL;
	
	return(tab);
}

// void indexing(char **str)
// {
// }

int		parser(char **str, t_table **tab)
{
	int i = 1;
	
	while(str[i])
	{
		(*tab)->parsed_string = join_arguments((*tab)->parsed_string, ' ', str[i]);
		i++;
	}	return(1);
}
char	*join_arguments(char *s1, int delimiter, char *s2)
{
	char	*arguments;
	int		i;
	int		c;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	arguments = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!arguments)
		return (NULL);
	i = -1;
	c = -1;
	while (s1[++i])
		arguments[i] = s1[i];
	arguments[i++] = delimiter;
	while (s2[++c])
		arguments[i++] = s2[c];
	arguments[i] = '\0';
	free(s1);
	s1 = 0;
	return (arguments);
}