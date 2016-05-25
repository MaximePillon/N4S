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

float 		angle_correction(t_status *state, float dir)
{
  float		tmp[3];
  int		i;

  tmp[0] = 0;
  tmp[2] = 0;
  i = 0;
  while (i < 32)
  {
    tmp[i / (32 / 3)] += state->lidar_state[i];
    ++i;
  }
  tmp[0] /= (32 / 3);
  tmp[2] /= (32 / 3);
  if (tmp[0] > tmp[2] && dir > (32 / 3) * 2 && tmp[2] < 500)
    return (-((dir - ((32 / 3) * 2)) / 100));
  if (tmp[0] < tmp[2] && dir < (32 / 3) && tmp[0] < 500)
    return (dir / 100);
  return (0);
}
