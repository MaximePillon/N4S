/*
** get_current_wheels.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/get_current_wheels.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 17:47:42 2016 Maxime Pillon
** Last update Sun May 29 21:23:01 2016 Maxence
*/

#include	<unistd.h>
#include	"../../includes/define.h"

int		get_current_wheels(void)
{
  write(1, "GET_CURRENT_WHEELS\n", 19);
  return (3);
}
