/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 08:14:55 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/08 16:08:12 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int char_to_digit (char c)
{
	return (c - 48);
}

int		where_am_i(int a_line)
{
	/*Returns the floor on which the line is*/
	int i;
	int tot;

	tot = 0;
	i = 0;
	while (tot + 3 + i < a_line)
	{
		tot += 3 + i;
		i++;
	}
	return (tot);
}

char	*get_line(int a_line)
{
	int line_len;
	int i;
	int floor;
	int even;

	even = 1;
	if (floor % 2)
	{
		even = 0;
	}
	floor = where_am_i(a_line);
	i = 0;
	line_len = 3 + 2 * a_line + (even * 2 *  2 + floor * even);
	while (i < a_line){}
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
