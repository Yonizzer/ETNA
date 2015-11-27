/*
** my_sort_int_tab.c for my_sort_int_tab in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/my_sort_int_tab
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Thu Oct 22 09:05:04 2015 POLI Yoann
** Last update Thu Oct 22 14:28:27 2015 POLI Yoann
*/
#include <stdio.h>

void	my_putchar(char c);
 
void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;
  int	tmp;

  i = 0;
  j = 0;
  tmp = 0;

  for (i = 0; i < size; i++)
    {
      for (j = 0; j < size - 1; j++)
	{
	  if (tab[j] > tab[j + 1])
	    {
	      tmp = tab[j];
	      tab[j] = tab[j + 1];
	      tab[j + 1] = tmp;
	    }
	}
    }
}
