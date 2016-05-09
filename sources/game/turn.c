/*
** turn.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/turn.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon May 09 09:37:21 2016 Maxime Pillon
** Last update Mon May 09 09:37:21 2016 Maxime Pillon
*/

#include	"../../includes/define.h"

int		turn(t_status *state)
{
  int		cpt;

  cpt = 0;
  while (cpt < 32)
  {
    if (state->lidar_state[cpt] < 1000)
      return (0);
    cpt++;
  }
  return (1);
}