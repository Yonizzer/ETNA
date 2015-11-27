/*
** my_str_is_printable.c for my_str_is_printable in /home/yoann/piscine_v2/FDI-DEVC-008/jour02/poli_y/my_str_is_printable
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Oct 20 15:29:00 2015 POLI Yoann
** Last update Tue Oct 20 16:20:30 2015 POLI Yoann
*/

int	my_str_is_printable(char str[])
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      if ((str[count] < 32) || (str[count] > 126))
	{
	  return (0);
	}
      count++;
    }
  return (1);
}
