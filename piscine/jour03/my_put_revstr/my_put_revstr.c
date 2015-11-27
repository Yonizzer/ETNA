/*
** my_put_revstr.c for my_put_revstr in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_put_revstr
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 11:22:52 2015 POLI Yoann
** Last update Wed Oct 21 12:37:35 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_put_revstr(char *str)
{
  int	count;

  count = 0;
  while (*str != '\0')
    {
      str += 1;
      count++;
    }
  for (count = count; count >= 0; count--)
    {
      my_putchar(*str);
      str -= 1;
    }
  return;
}
