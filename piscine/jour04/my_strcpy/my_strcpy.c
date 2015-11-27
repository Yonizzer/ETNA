/*
** my_strcpy.c for my_strcpy in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/poli_y/my_strcpy
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Thu Oct 22 12:52:54 2015 POLI Yoann
** Last update Thu Oct 22 14:57:05 2015 POLI Yoann
*/

char	*my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
