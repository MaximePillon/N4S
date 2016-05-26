/*
** get_index.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/get_index.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue May 24 14:48:40 2016 Maxime Pillon
** Last update Tue May 24 14:48:40 2016 Maxime Pillon
*/

#include	"../../includes/n4s.h"

float		get_index(t_status *state)
{
  int		cpt;
  int		max;

  if (state->lidar_state[0] > 700 && state->lidar_state[31] > 700)
    return (15);
  max = 0;
  cpt = 1;
  while (cpt < 32)
  {
    if (state->lidar_state[max] < state->lidar_state[cpt])
      max = cpt;
    ++cpt;
  }
  return ((15 + max) / 2);
}
