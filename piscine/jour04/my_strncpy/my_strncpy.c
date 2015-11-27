/*
** my_strncpy.c for my_strncpy in /home/yoann/piscine_v2/FDI-DEVC-008/jour04/poli_y/my_strncpy
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Thu Oct 22 14:04:26 2015 POLI Yoann
** Last update Fri Oct 23 19:31:18 2015 POLI Yoann
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int   i;
  
  i = 0;
  while (n > 0 && *(src + i))
    {
      dest[i] = src[i];
      i++;
      n--;
    }
  while (n > 0)
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}
