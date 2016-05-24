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

/*
** data[0] = moy
** data[1] = max value
** data[2] = close_type_value
** data[3] = close index
*/

static int	get_index_moyenne(float moyenne, t_status *state)
{
  float		close;
  int		index;
  int		cpt;
  float		tmp;

  cpt = -1;
  close = 1000;
  tmp = 0;
  while (++cpt < 32)
  {
    if ((tmp = (moyenne - state->lidar_state[cpt])) < 0)
      tmp *= -1;
    if (tmp < close)
    {
      close = tmp;
      index = state->lidar_state[cpt];
    }
  }
  return (index);
}

float		get_index(t_status *state)
{
  float		moyenne;
  float		max_value;
  int		close_moyenne;
  int		max_index;
  int		cpt;

  cpt = -1;
  max_value = 0;
  while (++cpt < 32)
    moyenne += state->lidar_state[cpt];
  moyenne /= 32;
  cpt = -1;
  while (++cpt < 32)
    if (max_value < state->lidar_state[cpt])
    {
      max_value = state->lidar_state[cpt];
      max_index = cpt;
    }
  close_moyenne = get_index_moyenne(moyenne, state);
  return (((float)max_index + (float)close_moyenne) / 2);
}