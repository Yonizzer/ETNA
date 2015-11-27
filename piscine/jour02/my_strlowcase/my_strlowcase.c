/*
** my_strlowcase.c for my_strlowcase in /home/yoann/piscine_v2/FDI-DEVC-008/jour02/poli_y/my_strlowcase
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Oct 20 14:40:41 2015 POLI Yoann
** Last update Mon Oct 26 10:22:30 2015 POLI Yoann
*/

char	*my_strlowcase(char str[])
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      if ((str[count] >= 'A') && (str[count] <= 'Z'))
	{
	  str[count] = str[count] + 32;
	}
      count++;
    }
  return (str);
}
