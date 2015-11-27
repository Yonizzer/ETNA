/*
** my_aff_tab.c for my_aff_tab in /home/yoann/piscine_v2/FDI-DEVC-008/jour02/my_aff_tab
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 20:58:44 2015 POLI Yoann
** Last update Tue Oct 20 17:54:51 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_aff_tab(char str[])
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
