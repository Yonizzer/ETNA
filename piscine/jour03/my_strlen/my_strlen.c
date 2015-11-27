/*
** my_strlen.c for my_strlen in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_strlen
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 09:40:37 2015 POLI Yoann
** Last update Wed Oct 21 11:49:33 2015 POLI Yoann
*/

int	my_strlen(char *str)
{
  int	count;

  count = 0;
  while (*str != '\0')
    {
      str++;
      count++;
    }
  return (count);
}
