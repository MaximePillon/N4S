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
  float		value;

  value = state->lidar_state[16];
  value += state->lidar_state[17];
  value += state->lidar_state[18];
  value += state->lidar_state[19];
  value += state->lidar_state[20];
  value += state->lidar_state[15];
  value += state->lidar_state[14];
  value += state->lidar_state[13];
  value += state->lidar_state[12];
  value /= 9;
  value /= 3010;
  if (state->wheels_state > 0.1)
    value *= (1 - state->wheels_state);
  else if (state->wheels_state < 0.1)
    value *= (1 + state->wheels_state);
  value *= 0.8;
  if (value < 0.2)
    value = 0.2;
  return (value);
}
