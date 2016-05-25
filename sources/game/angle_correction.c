/*
** angle_correction.c for CPE_2015_n4s in /home/corsin_a/Travail/CPE/CPE_2015_n4s/sources/game/angle_correction.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Wed May 25 15:09:52 2016 Sylvain CORSINI
** Last update Wed May 25 15:09:52 2016 Sylvain CORSINI
*/

#include	"../../includes/n4s.h"

float 		angle_correction(t_status *state)
{
  float		correction;

  if (state->lidar_state[0] < state->lidar_state[31])
    correction = state->lidar_state[31];
  else
    correction = state->lidar_state[0];
  if (correction > 400)
    return (0);
  correction /= 800;
  if (state->lidar_state[0] < state->lidar_state[31])
    correction = -correction;
  return (correction);
}
