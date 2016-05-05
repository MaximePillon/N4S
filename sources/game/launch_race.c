/*
** launch_race.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/launch_race.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue Apr 26 15:42:28 2016 Maxime Pillon
** Last update Tue Apr 26 15:42:28 2016 Maxime Pillon
*/

#include	"../../includes/n4s.h"

int		get_all_state(t_status *state)
{
  if (analyse(GET_LIDAR, get_lidar(), state) == -1)
    return (error_message("launch of simulation failed"));
  if (analyse(GET_CURRENT_SPEED, get_current_speed(), state) == -1)
    return (error_message("launch of simulation failed"));
  if (analyse(GET_CURRENT_WHEELS, get_current_wheels(), state) == -1)
    return (error_message("launch of simulation failed"));
  return (0);
}

int		launch_race(t_status *state)
{
  while (my_strcmp(state->add_info, "Checkpoint d'arrive") != 0)
  {
    if (get_all_state(state) == -1)
      return (-1);
    if (state->lidar_state < 1000)
    {
      if (need_to_turn(state) == -1)
	return (-1);
    }
    else if (state->wheels != 0)
    {
      if (keep_direction(state) == -1)
	return (-1);
    }
    else
    {
      if (acceleration(state) == -1)
	return (-1);
    }
  }
}