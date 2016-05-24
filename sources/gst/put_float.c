/*
** put_float.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/put_float.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon May 09 09:10:21 2016 Maxime Pillon
** Last update Mon May 09 09:10:21 2016 Maxime Pillon
*/

#include	<unistd.h>
#include	"../../includes/n4s.h"

#include	<stdio.h>

void		put_float(float nb)
{
  /*char		c;*/
  printf("%f", nb);
  /*while ((int)nb % 10 != 0)
    nb *= 10;
  nb /= 10;
  while (nb != 0)
  {
    c = (int)nb % 10 + 48;
    nb /= 10;
    write(2, &c, 1);
  }
   */
}