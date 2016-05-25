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

#include	<stdio.h>

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

void		print_state(t_status *state)
{
  int		i;

  fprintf(stderr, "add_info : %s \n speed : %f \n wheels : %f \n", state->add_info, state->speed_state, state->wheels_state);
  i = 0;
  while (i < 32)
  {
    fprintf(stderr, "%d:%f\n", i, state->lidar_state[i]);
    ++i;
  }
  fprintf(stderr, "\n");
}

int		launch_race(t_status *state)
{
  float		max;
  float		angle;

  fprintf(stderr, "Race launched\n");
  while (1)
  {
    if (get_all_state(state) == -1)
      return (-1);
    print_state(state);
    max = get_index(state);
    fprintf(stderr, "The max value is: %f\n", max);
    angle = (float)((((((max + 1.0) / 32.0) * 180.0) - 90.0) / 90.0) * -1.0);
    angle *= 0.4;
    fprintf(stderr, "%f\n", angle);
    if (analyse(CAR_FORWARD, car_forward(speed_need(state)), state) == -1)
      return (-1);
    if (analyse(WHEELS_DIR, wheels_dir(angle), state) == -1)
      return (-1);
    /*
    if (turn(state) == 1)
    {
      if (need_to_turn(state) == -1)
	return (-1);
    }
    else if (state->wheels_state != 0)
    {
      if (keep_direction(state) == -1)
	return (-1);
    }
    else
    {
      if (acceleration(state) == -1)
	return (-1);
    }
    */
  }
  return (0);
}
