/*
** c_word.c for count word in /home/yoann/piscine_v2/FDI-DEVC-008/jour07/poli_y/my_str_to_wordtab
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 26 15:40:35 2015 POLI Yoann
** Last update Tue Nov 17 13:27:10 2015 POLI Yoann
*/

int	c_word(char *s)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (s[i])
    {
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')
	  || (s[i] >= '0' && s[i] <= '9'))
	{
	  n++;
	  while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')
		 || (s[i] >= '0' && s[i] <= '9'))
	    i++;
	}
      i++;
    }
  return (n);
}
