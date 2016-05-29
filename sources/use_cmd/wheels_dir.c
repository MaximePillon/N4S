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
#include	"../../includes/define.h"

int		wheels_dir(float value)
{
  write(1, "WHEELS_DIR:", 11);
  put_float(value, 6);
  write(1, "\n", 1);
  return (1);
}
