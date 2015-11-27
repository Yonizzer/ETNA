/*
** my_prev_char.c for my_prev_char in /home/yoann/piscine_v2/FDI-DEVC-008/jour01/poli_y/my_prev_char
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 11:56:57 2015 POLI Yoann
** Last update Mon Oct 19 13:22:39 2015 POLI Yoann
*/

char	my_prev_char(char c)
{
  if ((c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z'))
    {
      c -= 1;
      return (c);
    }
  else if (c == 'a')
    {
      return ('z');
    }
  else if (c == 'A')
    {
      return ('Z');
    }
  else
    {
      return (' ');
    }
}
