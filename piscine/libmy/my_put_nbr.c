/*
** my_put_nbr.c for my_put_nbr in /home/yoann/piscine_v2/FDI-DEVC-008/jour05/poli_y/my_put_nbr
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Fri Oct 23 14:08:02 2015 POLI Yoann
** Last update Wed Nov 18 08:55:27 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_putstr2(char *str)
{
  if (*str != '\0')
    {
      my_putchar(*str);
      my_putstr2(str + 1);
    }
}

void	my_put_nbr(int n)
{
  int	res;
  int	div;

  res = 0;
  div = 0;
  if (n < -2147483647)
    my_putstr2("-2147483648");
  else
    {
      if (n < 0)
	{
	  my_putchar('-');
	  n = -n;
	}
      div = 1;
      while ((n / div) >= 10)
	div = div * 10;
      while (div > 0)
	{
	  res = (n / div) % 10;
	  my_putchar(res + 48);
	  div = div / 10;
	}
    }
}
