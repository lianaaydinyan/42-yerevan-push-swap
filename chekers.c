// #include "push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
// void sa(t_stack *a)
// {
// 	int tmp;

// 	tmp = *a;
// 	t_stack *b = tmp->next; 
// 	if(!a || !b)
// 		return(NULL);
// 	int c;
// 	c = *a;
// 	*a = *b;
// 	*b = c;
// }
// // sb (swap b): Swap the first 2 elements at the top of stack b.
// // Do nothing if there is only one or no elements.
// void sb(t_stack *b)
// {
// 	int tmp = *b;
// 	t_stack *c = tmp->next;
// 	if(!b || !c)
// 		return(NULL);
// 	int a;
// 	a = *b;
// 	*b = *c;
// 	*c = a;
// }
// // ss : sa and sb at the same time.
// void ss(t_stack *a , t_stack *b)
// {
// 	sa(*a);
// 	sb(*b);
// }
// // pa (push a): Take the first element at the top of b and put it at the top of a.
// // Do nothing if b is empty.
// void pa(t_stack *b,t_stack **a)
// {
// 	if(b)
// 	{
// 		int top = b->data;
// 		t_stack *new_a;

// 		new_a = malloc(sizeof(t_stack) * 1);
// 		if(!new_a)
// 			return(NULL);
// 		new_a->data = top;
// 		new_a->next = *a;
// 		*a = new_a;
// 	}
// }
// // pb (push b): Take the first element at the top of a and put it at the top of b.
// // Do nothing if a is empty.
// void pa(t_stack *a,t_stack **b)
// {
// 	if(a)
// 	{
// 		int top = a->data;
// 		t_stack *new_b;

// 		new_b = malloc(sizeof(t_stack) * 1);
// 		if(!new_b)
// 			return(NULL);
// 		new_b->data = top;
// 		new_b->next = *b;
// 		*b = new_b;
// 	}
// }

// int ft_list_size(t_stack **a)
// {
// 	if(!*a)
// 		return(0);
// 	return(1 + t_list(*a->t_stack));
// }
// // ra (rotate a): Shift up all elements of stack a by 1.
// // The first element becomes the last one.

// void ra(t_list **a)
// {
// 	int end;
// 	int a_size = ft_list_size(a);
// 	int tmp1 = *a;
// 	int tmp2 = tmp1->next;
// 	while(*a->next)
// 		*a = *a->next;
// 	end = *a->next;

// }

// void push(t_list **a,t_list **b)
// {
// 	if(!*a)

// }

