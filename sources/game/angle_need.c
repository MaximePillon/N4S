/*
** angle_need.c for CPE_2015_n4s in /home/corsin_a/Travail/CPE/CPE_2015_n4s/sources/game/angle_need.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Thu May 26 11:17:29 2016 Sylvain CORSINI
** Last update Sun May 29 21:17:56 2016 Maxence
*/

#include	"../../includes/n4s.h"

static float	correct_angle(float value, t_status *state)
{
  value *= (1 - (state->lidar_state[16] / 3010));
  if (state->lidar_state[0] < 250 && state->lidar_state[31] < 250)
    value *= 2;
  value = (value > 1) ? (1) : (value);
  value = (value < -1) ? (-1) : (value);
  return (value);
}

static float	get_data(t_status *state, int tiers)
{
  int		cpt;
  int		value;
  float		data;

  data = 0;
  if (tiers == 1)
    cpt = -1;
  else if (tiers == 2)
    cpt = 10;
  else
    cpt = 21;
  value = cpt + 11;
  while (++cpt < value)
    data += state->lidar_state[cpt];
  return (data);
}

static float	start_turn(t_status *state)
{
  float		value;
  float		middle;
  float		right;
  float		left;

  left = get_data(state, 1);
  right = get_data(state, 3);
  middle = get_data(state, 2);
  if (middle >= right && middle >= left)
    return (0);
  if (left > right)
    value = ((left / 10) / 3010);
  else if (right >= left)
    value = ((right / 10) / 3010) * -1;
  value *= 0.2;
  return (value);
}

float		angle_need(t_status *state)
{
  float		value;
  float		left;
  float		right;

  if (state->lidar_state[0] > 1100 && state->lidar_state[31] > 1100)
    return (start_turn(state));
  right = state->lidar_state[31] + state->lidar_state[30]
    + state->lidar_state[29];
  right = (right > (ANGLE_DIST * 3)) ? (ANGLE_DIST) : (right / 3);
  left = state->lidar_state[0] + state->lidar_state[1] + state->lidar_state[2];
  left = (left > (ANGLE_DIST * 3)) ? (ANGLE_DIST) : left / 3;
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
  return (correct_angle(value, state));
}
