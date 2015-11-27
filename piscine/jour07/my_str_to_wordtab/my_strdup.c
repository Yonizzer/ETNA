/*
** my_strdup.c for my_strdup in /home/yoann/piscine_v2/FDI-DEVC-008/jour07/poli_y/my_strdup
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 26 10:32:48 2015 POLI Yoann
** Last update Mon Oct 26 17:02:00 2015 POLI Yoann
*/

#include <stdlib.h>

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char	*c;

  c = malloc(my_strlen(str) * sizeof(char));
  if (c == 0)
    {
      return (0);
    }
  my_strcpy(c, str);
  return (c);
}
