/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   satentua2.0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 13:50:03 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/08/09 17:13:27 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		get_taille_ligne(int etage)
{
	int i;
	int j;
	int out;
	int k_etage;
	int nbr_max_ligne;

	i = 0;
	out = 0;
	j = etage;
	k_etage = 0;
	nbr_max_ligne = etage + 1;

	while (k_etage != etage)
	{
		sup_etoile += i + 2
			if (k_etage % 2 && k_etage != 1)
				i += 2;
		j++;
			if (j = k_etage + 1)
			{
				k_etage++;
				j = 0;
			}
	}
	out = etage * sup_etoile


}



char *writetab(int etage)
{
	int		max_ligne
	char	etage[max_ligne];

	max_ligne = get_taille_ligne(etage);
}


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
	int		ligne;
	int		etage;
	char	tab_pyrammide[nbr_ligne][taille_ligne];

	i = taille_ligne;
		ligne = 0;
		while (ligne > nbr_ligne) 
		{
			while (j != taille_ligne - 1)
			{
				if (j == ext_py_l || j = ext_py_r)
				{
					if
				}
				else
					tab_pyrammide[ligne][j++] = '*';
			}
		}
	}
}
