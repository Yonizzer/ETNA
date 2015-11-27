/*
** my_putchar.c for my_putchar in /home/yoann/piscine_v2/FDI-DEVC-008/jour01/poli_y/my_putchar
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Oct 19 11:02:52 2015 POLI Yoann
** Last update Mon Oct 19 12:12:22 2015 POLI Yoann
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
