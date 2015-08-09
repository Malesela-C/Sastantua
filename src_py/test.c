int		ft_putchar(char c);

void	write_door(int *i, int *poigner, int espace_1er_ligne, int s_door)
{
	int	position_key;

	position_key = s_door / 2;
	if ((espace_1er_ligne == position_key) && (*poigner == (s_door / 2) - 1)
		&& (s_door > 3))
		ft_putchar('$');
	else
		ft_putchar('|');
	*i = *i + 1;
	*poigner = *poigner + 1;
}
int		write_line(int line_nb, int espace_1er_ligne, int size_door)
{
	int	i;
	int	z;
	int	poigner;

	poigner = -size_door / 2;
	z = 0;
	i = 0;
	while (i < espace_1er_ligne)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i <= line_nb * 2)
	{
		while ((i == line_nb + poigner) && (espace_1er_ligne < size_door)
			&& (poigner <= size_door / 2))
			write_door(&i, &poigner, espace_1er_ligne, size_door);
		ft_putchar('*');
		i = i + 1;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (espace_1er_ligne - 1);
}

void	print_pyramid(int espace_1er_ligne, int nb_ligne_etages, int ligne_porchain_block, int size_door)
{
	int	ligne;
	int	condition_inc_nb_ligne_etages;
	int	ligne_next_block;

	ligne = 0;
	ligne_next_block = 4;
	condition_inc_nb_ligne_etages = 1;
	while (espace_1er_ligne + 1)
	{
		if (ligne == ligne_porchain_block)
		{
			ligne += nb_ligne_etages;
			espace_1er_ligne -= nb_ligne_etages;
			ligne_porchain_block = ligne + ligne_next_block;
			ligne_next_block++;
			if (condition_inc_nb_ligne_etages == 2)
			{
				nb_ligne_etages++;
				condition_inc_nb_ligne_etages = 0;
			}
			condition_inc_nb_ligne_etages++;
		}
		espace_1er_ligne = write_line(ligne, espace_1er_ligne, size_door);
		ligne = ligne + 1;
	}
}

void	sastantua(int size)
{
	int	espace_1er_ligne;
	int	nb_ligne_etages;
	int	ligne_porchain_block;
	int	i;
	int	z;

	i = 1;
	z = 0;
	nb_ligne_etages = 2;
	ligne_porchain_block = 3;
	espace_1er_ligne = 0;
	if (size > 0)
	{
		while (i <= size)
		{
			espace_1er_ligne = espace_1er_ligne + 6 + z;
			if (i > 1)
				z = z + 1;
			if ((i > 1) && (i % 2))
				z = z + 1;
			i++;
		}
		if (!(size % 2))
			size = size - 1;
		print_pyramid(espace_1er_ligne - 4, nb_ligne_etages, ligne_porchain_block, size);
	}
}

int main()
{
	sastantua(3);
	return 0;
}
