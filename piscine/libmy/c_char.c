/*
** c_char.c for count char in /home/yoann/piscine_v2/FDI-DEVC-008/jour07/poli_y/my_str_to_wordtab
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 26 15:54:37 2015 POLI Yoann
** Last update Tue Nov 17 13:27:37 2015 POLI Yoann
*/

int	c_char(char *s, int *i)
{
  int	count;

  count = 0;
  while (s[*i] && ((s[*i] >= 'a' && s[*i] <= 'z')
		   || (s[*i] >= 'A' && s[*i] <= 'Z')
		   || (s[*i] >= '0' && s[*i] <= '9')))
    {
      count++;
      *i = *i + 1;
    }
  return (count);
}
