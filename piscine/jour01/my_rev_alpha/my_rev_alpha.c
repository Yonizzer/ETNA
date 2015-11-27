/*
** my_rev_alpha.c for my_rev_alpha in /home/yoann/piscine_v2/FDI-DEVC-008/jour01/poli_y/my_rev_alpha
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 14:03:35 2015 POLI Yoann
** Last update Mon Oct 19 14:13:00 2015 POLI Yoann
*/

void	my_putchar(char c);
void	my_rev_alpha()
{
  char	x;

  x = 'z';
  while (x >= 'a')
    {
      my_putchar(x);
      x--;
    }
}
