/*
** my_aff_chiffre.c for my_aff_chiffre in /home/yoann/piscine_v2/FDI-DEVC-008/jour01/poli_y/my_aff_chiffre
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 14:14:53 2015 POLI Yoann
** Last update Mon Oct 19 14:23:22 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_aff_chiffre()
{
  char a;

  a = '0';
  while (a <= '9')
    {
      my_putchar(a);
      a++;
    }
}
