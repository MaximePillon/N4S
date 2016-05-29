/*
** angle_need.c for CPE_2015_n4s in /home/corsin_a/Travail/CPE/CPE_2015_n4s/sources/game/angle_need.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Thu May 26 11:17:29 2016 Sylvain CORSINI
** Last update Sun May 29 17:44:30 2016 Maxence
*/

#include	"../../includes/n4s.h"

float		is_it_a_wall(t_status *state)
{
  int		cpt;

  cpt = 14;
  while (cpt < 18)
    {
      if (state->lidar_state[cpt] != state->lidar_state[cpt + 1]
	  && state->lidar_state[cpt] < 2900
	  && state->lidar_state[cpt + 1] < 2900)
	if (state->lidar_state[14] < state->lidar_state[18])
	  return (0.2);
	else
	  return (-0.2);
      ++cpt;
    }
  return (0);
}

float		angle_need(t_status *state)
{
  float		value;
  float		left;
  float		right;

  right = ((state->lidar_state[31] + state->lidar_state[30] + state->lidar_state[29]) > (ANGLE_DIST * 3)) ?
	  (ANGLE_DIST) : (state->lidar_state[31] + state->lidar_state[30] + state->lidar_state[29]) / 3;
  left = ((state->lidar_state[0] + state->lidar_state[1] + state->lidar_state[2]) > (ANGLE_DIST * 3)) ?
	 (ANGLE_DIST) : (state->lidar_state[0] + state->lidar_state[1] + state->lidar_state[2]) / 3;
  if ((left < right + 10) && (left > right - 10))
    return (is_it_a_wall(state));
  else if (left < right)
  {
    (right + right - left > ANGLE_DIST) ?
    (right = ANGLE_DIST) : (right += right - left);
    value = (1 - (ANGLE_MAX - (right - left)) / ANGLE_MAX) * -1;
  }
  else if (left > right)
  {
    (left + left - right > ANGLE_DIST) ?
    (left = ANGLE_DIST) : (left += left - right);
    value = (1 - (ANGLE_MAX - (left - right)) / ANGLE_MAX);
  }
  value *= (1 - (state->lidar_state[16] / 3010));
  if (value > 1)
    value = 1;
  else if (value < -1)
    value = -1;
  return (value);
}
