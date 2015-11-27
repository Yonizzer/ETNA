/*
** my_strncmp.c for my_strncmp in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/poli_y/my_strncmp
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Thu Oct 22 16:55:05 2015 POLI Yoann
** Last update Thu Oct 22 17:10:36 2015 POLI Yoann
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((s1[i] || s2[i]) && i < n)
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i++;
    }
  if ((s1[i] < s2[i]) && i < n)
    return (-1);
  if ((s1[i] > s2[i]) && i < n)
    return (0);
  return (0);
}
