/*
** my_putstr.c for my_putstr in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_putstr
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 08:44:36 2015 POLI Yoann
** Last update Wed Oct 21 09:35:48 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  if (*str != '\0')
    {
      my_putchar(*str);
      my_putstr(str + 1);
    }
}
