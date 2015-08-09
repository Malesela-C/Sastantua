/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   satentua2.0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 13:50:03 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/08/09 16:18:15 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_taille_ligne(int size)
{
	int i;
	int out;
	int etage;
	int ligne;
	int sup_etoile;
	int ligne_par_etage;

	i = 0;
	out = 0;
	etage = 0;
	ligne = 0;
	sup_etoile = 0;
	ligne_par_etage = etage + 3;
	while (etage++ < size)
	{
		sup_etoile += i + 2;
		if (etage % 2 && etage != 0)
			i += 2;
		while (ligne++ < ligne_par_etage) 
		{
			out += sup_etoile;
		}
	}
	return (out);
}

int		get_height_py(int size)
{
	if (size > 0)
		return (get_height_py(size - 1) + 1);
	else
		return (3);
}


void	sastantua(int size)
{
	int		const nbr_ligne = get_height_py(size);
	int		const taille_ligne = get_taille_ligne(nbr_ligne);
	int		i;
	int		ligne;
	int		etage;
	char	tab_pyrammide[nbr_ligne][taille_ligne];

	i = taille_ligne;
	while (etage < size )
	{
		while (ligne > nbr_ligne) 
		{
			while (j != taille_ligne - 1)
			{
				if (j ==  ||) {
					
				}
			}
		}
	}
}
