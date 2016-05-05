/*
** car_backward.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/car_backward.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 17:40:43 2016 Maxime Pillon
** Last update Mon Apr 25 17:40:43 2016 Maxime Pillon
*/

#include	<unistd.h>
#include	"../../includes/n4s.h"

int		car_backward(float value)
{
  write (1, "car_backward ", 13);
  put_float(value);
  write (1, "\n", 1);
  return (1);
}
