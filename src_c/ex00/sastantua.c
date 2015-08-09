/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 17:13:40 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/08/09 19:36:47 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affiche_port(int *i,int *poigner, int ligne, int size_door)
{
	int position_clef;

	position_clef = size_door / 2;
	if ((ligne == position_clef && *poigner == (size_door / 2) - 1)
		&& size_door > 3)
			ft_putchar('$');
	else
		ft_putchar('|');
	poigner++;
	i++;
}

void		affiche_ligne(int ligne, int taille_ligne, int size_door)
{
	int i;
	int z;
	int poigner;

	i = 0;
	z = 0;
	poigner = -size_door / 2;
	while (i < taille_ligne)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i <= ligne * 2)
	{
		while ((i == ligne + poigner && taille_ligne < size_door )
				&& (poigner <= size_door / 2)) 
			affiche_port(&i ,&poigner, taille_ligne++, size_door);
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	print_puramid(int espace_1er_ligne, int nb_ligne_etage, int ligne_prochain_block, int size)
{
	int	ligne;
	int	condition_inc_nb_jumps;
	int	ligne_next_etage;

	ligne = 0;
	ligne_next_etage = 4;
	condition_inc_nb_jumps = 1;
	while (espace_1er_ligne + 1)
	{
		if (ligne == ligne_prochain_block)
		{
			ligne += nb_ligne_etage;
			espace_1er_ligne -= nb_ligne_etage;
			ligne_prochain_block = ligne + ligne_next_etage;
			ligne_next_etage++;
			if (condition_inc_nb_jumps == 2)
			{
				nb_ligne_etage++;
				condition_inc_nb_jumps = 0;
			}
			condition_inc_nb_jumps++;
		}
		affiche_ligne(ligne , espace_1er_ligne--, size);
		ligne++;
	}
}

void	sastantua(int size)
{
	int espace_1er_ligne;
	int nb_ligne_etage;
	int ligne_prochain_block;
	int i;
	int j;

	i = 1;
	j = 0;
	nb_ligne_etage = 2;
	ligne_prochain_block = 3;
	espace_1er_ligne = 0;
	if (size > 0)
	{
		while (i <= size)
		{
			espace_1er_ligne += 6 + j;
			if (i > 1)
				j++;
			if (i > 1 && i % 2)
				j++;
			i++;
		}
		if (!(size % 2))
			size -= 1;
		print_puramid(espace_1er_ligne - 4, nb_ligne_etage, ligne_prochain_block, size);
	}
}
