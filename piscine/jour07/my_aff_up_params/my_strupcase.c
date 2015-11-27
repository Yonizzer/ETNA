/*
** my_strupcase.c for my_strupcase in /home/yoann/piscine_v2/FDI-DEVC-008/jour02/poli_y/my_strupcase
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Oct 20 14:12:46 2015 POLI Yoann
** Last update Mon Oct 26 10:21:33 2015 POLI Yoann
*/

char	*my_strupcase(char str[])
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      if ((str[count] >= 'a') && (str[count] <= 'z'))
	{
	  str[count] = str[count] - 32;
	}
      count++;
    }
  return (str);
}
