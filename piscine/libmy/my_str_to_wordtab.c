/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/yoann/piscine_v2/FDI-DEVC-008/jour07/poli_y/my_str_to_wordtab
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 26 11:09:57 2015 POLI Yoann
** Last update Tue Nov 17 13:33:01 2015 POLI Yoann
*/

#include <stdlib.h>

int	c_char(char *s, int *i);
int	c_word(char *s);
char	*my_strdup(char *str);
void	my_putchar(char c);

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	n;
  int	wo;
  char	**tab;

  i = 0;
  n = 0;
  wo = c_word(my_strdup(str));
  tab = malloc(wo * sizeof(char *));
 
  while (str[i] && wo > 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z')
	  || (str[i] >= 'A' && str[i] <= 'Z')
	  || (str[i] >= '0' && str[i] <= '9'))
	{
	  tab[n] = my_strdup(str + i);
	  tab[n][c_char(str, &i)] = '\0';
	  n++;
	  wo--;
	}
      i++;
    }
  tab[c_word(my_strdup(str))] = NULL;
  return (tab);
}
