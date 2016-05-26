/*
** angle_need.c for CPE_2015_n4s in /home/corsin_a/Travail/CPE/CPE_2015_n4s/sources/game/angle_need.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Thu May 26 11:17:29 2016 Sylvain CORSINI
** Last update Thu May 26 11:17:29 2016 Sylvain CORSINI
*/

#include	"../../includes/n4s.h"

#define		ANGLE_DIST	(800)
#define		ANGLE_MAX	(2 * ANGLE_DIST)

float		angle_need(t_status *state)
{
  float		value;
  float		left;
  float		right;

  right = (state->lidar_state[31] > ANGLE_DIST) ?
	  (ANGLE_DIST) : (state->lidar_state[31]);
  left = (state->lidar_state[0] > ANGLE_DIST) ?
	 (ANGLE_DIST) : (state->lidar_state[0]);
  if (left < right)
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
  else
    return (0);
  value *= (1 - (state->lidar_state[16] / 3010));
  if (value > 1)
    value = 1;
  else if (value < -1)
    value = -1;
  return (value);
}
