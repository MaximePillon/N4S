/*
** wheels_dir.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/wheels_dir.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 17:42:37 2016 Maxime Pillon
** Last update Mon Apr 25 17:42:37 2016 Maxime Pillon
*/

#include	<unistd.h>
#include	"../../includes/n4s.h"

int		wheels_dir(float value)
{
  write (1, "wheels_dir ", 12);
  put_float(value);
  write (1, "\n", 1);
  return (1);
}
