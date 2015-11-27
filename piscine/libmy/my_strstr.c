/*
** my_strstr.c for my_strstr in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/poli_y/my_strstr
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Fri Oct 23 20:40:11 2015 POLI Yoann
** Last update Tue Nov 17 13:32:27 2015 POLI Yoann
*/

char	*my_strstr( char *str, char *to_find)
{
  int	i;
  
  i = 0;
  if (str[0] != '\0')
    {
      while (to_find[i] != '\0')
	{
	  if (to_find[i] != str [i])
	    return (my_strstr(str + 1, to_find));
	  i++;
	}
      return (str);
    }
  else
      return ("null");
}
