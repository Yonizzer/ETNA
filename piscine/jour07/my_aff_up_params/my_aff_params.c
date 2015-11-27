/*
** my_aff_params.c for my_aff_params in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_aff_params
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 14:24:34 2015 POLI Yoann
** Last update Mon Oct 26 10:02:11 2015 POLI Yoann
*/

void	my_putchar(char c);
void	my_putstr(char *str);

void	my_aff_params(int nbr, char **arg)
{
  int	x;

  x = 0;
  while (x != nbr)
    {
      my_putstr(arg[x]);
      my_putchar('\n');
      x++;
    }
}
