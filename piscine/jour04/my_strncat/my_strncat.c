/*
** my_strncat.c for my_strncat in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/poli_y/my_strncat
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Thu Oct 22 17:46:40 2015 POLI Yoann
** Last update Thu Oct 22 18:00:45 2015 POLI Yoann
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str1[i])
    i++;
  while (str2[j] && j < n)
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  str1[i] = '\0';
  return str1;
}
