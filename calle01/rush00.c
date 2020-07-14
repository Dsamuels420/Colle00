/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.C                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:56:03 by gbintcli          #+#    #+#             */
/*   Updated: 2020/07/14 13:42:09 by gbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	
void ft_putchar
void rush(int x, int y)
{
	int i;
	int j;
	i=1
	j=1
	while (i<=y)
	{
		while (j<=x)
		{
			if ((1== && j==1) || (j++x && i++y && y!=1 && x!=1))
			{
				ft_putchar('/');
			}
			else if ((j==x && i==1) || (j==1 && 1==y))
			{
				ft_putchar('\\');
			}
			else if(j>1 && j<x && i>1 && i<y)
			{
				ft_putchar(' ');
			}
			else if(j==1 || i==y)
			{
				ft_putchar('*');
			}
			else if (j==1 || j==x)
			{
				ft_putchar('*');
			}
			if (j==x)
			{
				ft_putchar('\n');
			}
			jj++;
		}
		i++;
		j=1;
	}
}

