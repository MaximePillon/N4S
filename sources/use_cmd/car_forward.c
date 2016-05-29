/*
** car_forward.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/car_forward.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 15:56:44 2016 Maxime Pillon
** Last update Sun May 29 21:22:41 2016 Maxence
*/

#include	<unistd.h>
#include	"../../includes/define.h"

int		car_forward(float value)
{
   write(1, "CAR_FORWARD:", 12);
   put_float(value, 6);
   write(1, "\n", 1);
  return (1);
}
