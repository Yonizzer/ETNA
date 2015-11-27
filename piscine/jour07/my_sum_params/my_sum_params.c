/*
** my_sums_params.c for my_sums_params in /home/yoann/piscine_v2/FDI-DEVC-008/jour07/poli_y/my_sums_params
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 26 18:01:22 2015 POLI Yoann
** Last update Mon Oct 26 19:32:49 2015 POLI Yoann
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src);
char	*my_strcat(char *str1, char *str2);
int	mr_strlen(char *str);

char	*my_sum_params(int argc, char **argv)
{
  char	*dest;
  int	i;
  int	len_tot;

  len_tot = 0;
  for (i = 0; i < argc; i++)
    len_tot = len_tot + my_strlen(argv[i] + i);
  tot =+ argc;
  if (dest == 0)
    exit (1);
  for (i = 1; i < argc; i++)
    {
      return (0);
    }
  dest = my_strcat(dest, '\n');
  dest = my_strcat(dest, argc[i]);
  return (dest); 
}
