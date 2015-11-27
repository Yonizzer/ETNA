/*
** my_strstr.c for my_strstr in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/poli_y/my_strstr
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Fri Oct 23 20:40:11 2015 POLI Yoann
** Last update Mon Nov  2 18:45:34 2015 POLI Yoann
*/

char	*my_strstr( char *str, char *to_find)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  if (str[i] != '\0' && to_find[j] != '\0')
    {
      if (to_find[j] == str[i])
	{
	  if (k == 0)
	    k = 1;
	  i++;
	  j++;
	}
      else if (k != 0)
	return ("null");
      else
	i++;
    }
  if (k == 0)
    return ("null");
  str[j + k] = '\0';
  return (&str[k]);
}
    


