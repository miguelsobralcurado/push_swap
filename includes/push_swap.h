/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:20:13 by msobral-          #+#    #+#             */
/*   Updated: 2026/01/14 11:12:55 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft_printf_gnl/includes/libft_printf.h"
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

int		args_check(char **argv);
int		check_error(char **argv, int i, int j);
int		ft_dup_check(t_stack *a);
int		ft_sorted_check(t_stack *stk);
void	ft_error(void);
void	ft_args_to_stk(char **argv, t_stack **stack_a);
t_stack	*ft_parse(int argc, char **argv);
t_stack	*ft_quoted_to_stk(char **argv);
t_stack	*ft_process(int argc, char **argv);
void	ft_sort_three(t_stack **a);
void	ft_sort(t_stack **a);

int		ft_case_rarb(t_stack *a, t_stack *b, int n);
int		ft_case_rarb_a(t_stack *a, t_stack *b, int n);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int n);
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int n);
int		ft_case_rarrb(t_stack *a, t_stack *b, int n);
int		ft_case_rrarb(t_stack *a, t_stack *b, int n);
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int n);
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int n);
int		ft_apply_rarb(t_stack **a, t_stack **b, int n, char c);
int		ft_apply_rrarrb(t_stack **a, t_stack **b, int n, char c);
int		ft_apply_rrarb(t_stack **a, t_stack **b, int n, char c);
int		ft_apply_rarrb(t_stack **a, t_stack **b, int n, char c);
int		ft_rotate_type_ba(t_stack *a, t_stack *b);
int		ft_rotate_type_ab(t_stack *a, t_stack *b);

t_stack	*ft_stknew(int content);
t_stack *ft_stklast(t_stack *lst);
int		ft_stksize(t_stack *lst);
void	ft_stkadd_back(t_stack **stk, t_stack *new);
void	ft_stkfree(t_stack **lst);
int		ft_stkmin(t_stack *a);
int		ft_stkmax(t_stack *a);
int		ft_find_index(t_stack *a, int n);
int		ft_find_place_b(t_stack *stack_b, int n);
int		ft_find_place_a(t_stack *stack_a, int n);

void	sa(t_stack **a, int print);
void	sb(t_stack **b, int print);
void	ss(t_stack **a, t_stack **b, int print);
void	pa(t_stack **a, t_stack **b, int print);
void	pb(t_stack **a, t_stack **b, int print);
void	ra(t_stack **a, int print);
void	rb(t_stack **b, int print);
void	rr(t_stack **a, t_stack **b, int print);
void	rra(t_stack **a, int print);
void	rrb(t_stack **b, int print);
void	rrr(t_stack **a, t_stack **b, int print);

//		CHECKER

void	ft_checker_error(void);

#endif