/*
** my_strcmp.c for my_strcmp in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/poli_y/my_strcmp
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Thu Oct 22 16:10:21 2015 POLI Yoann
** Last update Fri Oct 23 19:56:28 2015 POLI Yoann
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    i++;
  if (s1[i] == '\0' && s2[i] == '\0')
    return (0);
  if (s1[i] > s2[i])
    return (1);
  if (s1[i] < s2[i])
    return (-1);
  return (0);
}
