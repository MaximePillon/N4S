/*
** car_forward.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/car_forward.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 15:56:44 2016 Maxime Pillon
** Last update Mon Apr 25 15:56:44 2016 Maxime Pillon
*/

#include	<unistd.h>
#include	"../../includes/define.h"

#include	<stdio.h>

int		car_forward(float value)
{
   write(1, "CAR_FORWARD:", 12);
   put_float(value, 3);
   write(1, "\n", 1);
  return (1);
}
