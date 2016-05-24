/*
** stop_simulation.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/stop_simulation.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 15:54:50 2016 Maxime Pillon
** Last update Mon Apr 25 15:54:50 2016 Maxime Pillon
*/

#include	<unistd.h>
#include	"../../includes/define.h"

int		stop_simulation(void)
{
  write (1, "STOP_SIMULATION\n", 16);
  return (1);
}