/*
** my_strchr.c for my_strchr in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_strchr
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 10:03:02 2015 POLI Yoann
** Last update Wed Oct 21 17:36:49 2015 POLI Yoann
*/

char	*my_strchr(char *str, int c)
{
  while (*str != '\0')
    {
      if (*str == c)
	return (str);
      str++;
    }
  return (str);
}
