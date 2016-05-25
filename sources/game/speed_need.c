/*
** speed_need.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/speed_need.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Wed May 25 12:59:43 2016 Maxime Pillon
** Last update Wed May 25 12:59:43 2016 Maxime Pillon
*/

#include	"../../includes/n4s.h"

float 		speed_need(t_status *state)
{
  int		cpt;
  float		max;

  cpt = 9;
  max = 0;
  while (++cpt < 21)
    if (state->lidar_state[cpt] > max)
      max = state->lidar_state[cpt];
  max /= 3200;
  state->speed_state = max;
  return (max);
}