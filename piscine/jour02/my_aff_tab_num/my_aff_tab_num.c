/*
** my_aff_tab_num.c for my_aff_tab_num in /home/yoann/piscine_v2/FDI-DEVC-008/jour02/my_aff_tab_num
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 21:46:33 2015 POLI Yoann
** Last update Tue Oct 20 17:55:25 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_aff_tab_num(int tab[], int size)
{
  int	x;

  for ( x = 0; x < size; x++)
    {
      my_putchar(tab[x] + 48);
      my_putchar('\n');
    }
}
