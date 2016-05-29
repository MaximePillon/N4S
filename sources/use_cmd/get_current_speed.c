/*
** get_current_speed.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/get_current_speed.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 17:46:31 2016 Maxime Pillon
** Last update Mon Apr 25 17:46:31 2016 Maxime Pillon
*/

#include	<unistd.h>
#include	"../../includes/define.h"

int		get_current_speed(void)
{
  write(1, "GET_CURRENT_SPEED\n", 18);
  return (3);
}
