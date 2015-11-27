/*
** my_trspos_tab.c for my_trspos_tab in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_trspos_tab
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 11:10:15 2015 POLI Yoann
** Last update Wed Oct 21 15:29:42 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_trspos_tab(int c, int l, int tab[l][c])
{
  int	i;
  int	j;

  for (i = 0; i < c; i++)
    {
      for (j = 0; j < l; j++)
	{
	  my_putchar((tab[j][i]) + 48);
	}
      my_putchar('\n');
    }
}
