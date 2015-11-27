/*
** my_rev_params.c for my_rev_params in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_rev_params
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 14:58:39 2015 POLI Yoann
** Last update Mon Nov  2 15:53:36 2015 POLI Yoann
*/

void	my_putchar(char c);
void	my_putstr(char *str);

void	my_rev_params(int nbr, char **arg)
{
  while (nbr-- > 0)
    {
      my_putstr(arg[nbr]);
      my_putchar('\n');
    }
}
