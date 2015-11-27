/*
** my_aff_alpha.c for my_aff_alpha in /home/yoann/piscine_v2/FDI-DEVC-008/jour01/poli_y/my_aff_alpha
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 13:28:25 2015 POLI Yoann
** Last update Mon Oct 19 14:01:24 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_aff_alpha()
{
  char	x;
  
  x = 'a';
  while (x <= 'z')
    {
      my_putchar(x);
      x++;
    }
}

