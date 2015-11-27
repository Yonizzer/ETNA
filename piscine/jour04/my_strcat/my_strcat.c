/*
** my_strcat.c for my_strcat in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/poli_y/my_strcat
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Thu Oct 22 17:14:07 2015 POLI Yoann
** Last update Fri Oct 23 20:19:34 2015 POLI Yoann
*/

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str1[i])
    i++;
  while (str2[j])
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  str1[i] = '\0';
  return (str1);
}
