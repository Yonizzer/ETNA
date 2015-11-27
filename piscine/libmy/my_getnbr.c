/*
** my_getnbr.c for my_getnbr in /home/yoann/piscine_v2/FDI-DEVC-008/jour05/poli_y/my_getnbr
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Fri Oct 23 14:31:58 2015 POLI Yoann
** Last update Fri Oct 23 17:20:10 2015 POLI Yoann
*/

int	my_getnbr(char *str)
{
  int	res;
  int	s;

  res = 0;
  s = 1;
  while (*str == '-' || *str == '+')
    {
      if (*str == '-')
	s = -s;
      str++;
    }
  while (*str != '\0' && (*str >= '0' && *str <= '9'))
    {
      if (res >= 2147483647)
	return (0);
      if (res == 2147483647 && s == 1)
	return (0);
      if (res == 2147483647 && s == -1)
	return (0);
      res = res * 10 + (*str - 48);
      str++;
    }
  if (s == -1)
    res = -res;
  return (res);
}
