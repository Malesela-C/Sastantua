/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 08:14:55 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/07 08:56:01 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_putchar(char c);

int char_to_digit (char c)
{
	return (c - 48);
}

int		where_am_i(int a_line)
{

}

int		get_pyramid_height(int floors)
{
	int tot;
	int i;

	tot = 0;
	i = 0;
	while (i <= floors)
	{
		tot += 3 + i;
		i++;
	}
	return (tot);
}

void	sastantua(int n_floors)
{
	int n_lines;
	int a_floor;
	int a_line;

	n_lines = get_pyramid_height(n_floors);
	a_line  = 0;
	while (a_line < n_lines)
	{
		ft_putchar ('.');
		ft_putchar ('\n');
		a_line++;
	}
}

int		main(int argc, char **argv)
{
	sastantua (char_to_digit (argv[1][0]));
	return (0);
}
