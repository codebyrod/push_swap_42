/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnc_teste.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:13:30 by rosousa-          #+#    #+#             */
/*   Updated: 2026/01/18 00:23:26 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    fnc_teste_unicacao(char **new_str, int *control)
{
	int i;

	i = 0;
	//PRINTFS DE TESTE PARA UNIFICAÇÃO VALIDATION: STATUS OK
	if(!new_str)
		printf("retorno: NULL da unif_data\n");
	while(new_str[i])
	{
		printf("String: %s\n", new_str[i]);
		i++;
	}
	printf("Valor de control: %d\n", *control);

	return;
}

void	fnc_teste_syntax(int nb_val)
{
	int i;
	
	i = 0;
	if (nb_val)
	{
		printf("APENAS NUMEROS: OK\n");
		printf("SINAIS NOS LOCAIS CORRETOS: OK\n");
	}
	else
	    printf("DEU RUIM\n");
}

void	fnc_teste_arr_nb(char **strstr, long *arr_nb)
{
	int len;
	int i;
	
	i = 0;
	len = ft_strlen_arr(strstr);

	while(len > i)
	{
		printf("Str_nb[%d]: %ld\n", i, arr_nb[i]);
		i++;
	}
}

void    fnc_teste_atol(int nb)
{
	printf("Print atol: %d\n", nb);
}
int    fnc_teste_limite(int lim_val)
{
	if(!lim_val)
	{
		//DAR FREE EM TUDO QUE FOI ALOCADO
		printf("%d: FORA DO LIMITE\n", lim_val);
		return (1); //VERIFICAR O RETORNO
	}
	else
	{
		printf("%d: LIMITE CORRETO\n", lim_val);
		return (0);
	}
}

int    fnc_teste_dup(int dup_val)
{
	printf("Valor de dup na teste: %d\n", dup_val);
	if(dup_val == 0)
	{
		//DAR FREE EM TUDO QUE FOI ALOCADO
		printf("%d: NÚMEROS DUPLICADOS\n", dup_val);
		return (1); //VERIFICAR O RETORNO
	}
	else
	{
		printf("%d: SEM DUPLICATAS\n", dup_val);
		return (0);
	}
}



