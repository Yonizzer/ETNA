/*
** main.c for main in /home/yoann/piscine_v2/FDI-DEVC-008/jour07/poli_y/my_aff_up_params
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 26 09:21:46 2015 POLI Yoann
** Last update Mon Oct 26 17:04:47 2015 POLI Yoann
*/

void	my_aff_up_params(int nbr, char **arg);
void	my_aff_params(int nbr, char **arg);
char	*my_strupcase(char str[]);
void	my_putstr(char *str);

int	main(int argc, char **argv)
{
  my_aff_up_params(argc, argv);
  return (0);
}
