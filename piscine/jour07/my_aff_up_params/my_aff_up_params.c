/*
** my_aff_up_params.c for my_aff_up_params in /home/yoann/piscine_v2/FDI-DEVC-008/jour07/poli_y/my_aff_up_params
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 26 09:07:27 2015 POLI Yoann
** Last update Mon Oct 26 10:01:06 2015 POLI Yoann
*/

void	my_aff_params(int nbr, char **arg);
char	*my_strupcase(char str[]);
void	my_putchar(char c);
void	my_putstr(char *str);

void	my_aff_up_params(int nbr, char **arg)
{
  int	i;

  i = 0;
  while (i != nbr)
    {
      my_putstr(my_strupcase(arg[i]));
      my_putchar('\n');
      i++;
    }
}
