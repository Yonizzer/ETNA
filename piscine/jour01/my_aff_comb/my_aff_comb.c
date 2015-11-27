/*
** my_aff_comb.c for my_aff_comb in /home/yoann/piscine_v2/FDI-DEVC-008/jour01
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 17:53:42 2015 POLI Yoann
** Last update Mon Oct 19 20:49:16 2015 POLI Yoann
*/

void	my_putchar(char c);

void	my_aff_comb()
{
  int	a;
  int	b;
  int	c;
  
  for (a = 0; a <= 7; a++)
    {
      for ( b = a +1; b <= 8; b++)
	{
	  for ( c = b + 1; c <= 9; c++)
	    {
	      my_putchar(a + 0x30);
	      my_putchar(b + 0x30);
	      my_putchar(c + 0x30);
	      if (a == 7 && b == 8 && c ==9)
		{
		  my_putchar('\n');
		}
	      else
		{
		  my_putchar(',');
		  my_putchar(' '); 
		}
	    }
	}
    }
}
