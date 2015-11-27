/*
** my_swap.c for my_swap in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_swap
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 10:37:03 2015 POLI Yoann
** Last update Wed Oct 21 10:58:22 2015 POLI Yoann
*/

void	my_swap(int *a, int *b)
{
  int	e;

  e = *a;
  *a = *b;
  *b = e;
}
