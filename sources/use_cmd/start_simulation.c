/*
** start_simulation.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/start_simulation.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 15:52:57 2016 Maxime Pillon
** Last update Sun May 29 21:23:12 2016 Maxence
*/

#include	<unistd.h>
#include	"../../includes/define.h"

int		start_simulation(void)
{
  write(1, "START_SIMULATION\n", 17);
  return (1);
}
