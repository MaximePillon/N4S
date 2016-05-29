/*
** launch_race.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/launch_race.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue Apr 26 15:42:28 2016 Maxime Pillon
** Last update Tue Apr 26 15:42:28 2016 Maxime Pillon
*/

#include	"../../includes/define.h"

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
  while (my_strcmp(state->add_info, "Track Cleared") != 0)
  {
    if (get_all_state(state) == -1)
      return (-1);
    if (analyse(CAR_FORWARD, car_forward(speed_need(state)), state) == -1)
      return (-1);
    if (analyse(WHEELS_DIR, wheels_dir(angle_need(state)), state) == -1)
      return (-1);
  }
  return (0);
}
