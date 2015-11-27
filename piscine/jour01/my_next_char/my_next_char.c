/*
** my_next_char.c for my_next_char in /home/yoann/piscine_v2/FDI-DEVC-008/jour01/poli_y/my_next_char
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 11:05:31 2015 POLI Yoann
** Last update Mon Oct 19 13:23:17 2015 POLI Yoann
*/

char	my_next_char(char c)
{
  if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
    {
      c+=1;
      return (c);
    }
  else if (c == 'z')
    {
      return ('a');
    }
  else if (c == 'Z')
    {
      return ('A');
    }
  else
    {
      return (' ');
    }
} 

