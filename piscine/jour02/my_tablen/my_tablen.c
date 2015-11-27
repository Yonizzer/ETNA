/*
** my_tablen.c for my_tablen in /home/yoann/piscine_v2/FDI-DEVC-008/jour02/poli_y/my_tablen
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Oct 20 12:58:02 2015 POLI Yoann
** Last update Tue Oct 20 13:09:58 2015 POLI Yoann
*/

int	my_tablen(char tab[])
{
  int	x;

  x = 0;
  if (tab == 0)
    {
      return (0);
    }
  while (tab[x])
    {
      x++;
    }
  return (x);
}
	
