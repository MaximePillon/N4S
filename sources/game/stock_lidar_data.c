/*
** stock_lidar_data.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/stock_lidar_data.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon May 09 09:28:52 2016 Maxime Pillon
** Last update Mon May 09 09:28:52 2016 Maxime Pillon
*/

#include	"../../includes/define.h"

int		stock_lidar_data(char **data, t_status *state)
{
  int		cpt;

  cpt = 3;
  while (cpt < 35)
  {
    if ((state->lidar_state[cpt - 3] = my_get_float(data[cpt])) == -1)
      return (-1);
    ++cpt;
  }
  return (0);
}