/*
** my_nb_len.c for my_nb_len in /home/yoann/piscine_v2/FDI-DEVC-008/jour01/poli_y/my_nb_len
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 14:37:27 2015 POLI Yoann
** Last update Mon Oct 19 15:22:07 2015 POLI Yoann
*/

int	my_nb_len(int n)
{
  int	nb;

  nb = 1;
  while ((n > 10) || (n < (-10)))
    {
      n = n / 10;
      nb++;
    }
    return (nb);
}
