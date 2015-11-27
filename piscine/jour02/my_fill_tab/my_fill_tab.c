/*
** my_fill_tab.c for my_fill_tab in /home/yoann/piscine_v2/FDI-DEVC-008/jour02/poli_y/my_fill_tab
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Oct 20 13:42:09 2015 POLI Yoann
** Last update Tue Oct 20 17:55:55 2015 POLI Yoann
*/

int	*my_fill_tab()
{
  static int	tab[100];
  int	x;

  for (x = 0; x <= 99; x++)
    {
      tab[x] = x + 1;
    }
  return (tab);
}
