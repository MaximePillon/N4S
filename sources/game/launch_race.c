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


#include	<unistd.h>
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
  fprintf(stderr, "add_info : %s \n speed : %f \n wheels : %f \n", state->add_info, state->speed_state, state->wheels_state);
  fprintf(stderr, "%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f \n", state->lidar_state[0], state->lidar_state[1], state->lidar_state[2], state->lidar_state[3], state->lidar_state[4], state->lidar_state[5], state->lidar_state[6], state->lidar_state[7], state->lidar_state[8], state->lidar_state[9], state->lidar_state[10], state->lidar_state[11], state->lidar_state[12], state->lidar_state[13], state->lidar_state[14], state->lidar_state[15], state->lidar_state[16], state->lidar_state[17], state->lidar_state[18], state->lidar_state[19], state->lidar_state[20], state->lidar_state[21], state->lidar_state[22], state->lidar_state[23], state->lidar_state[24], state->lidar_state[25], state->lidar_state[26], state->lidar_state[27], state->lidar_state[28], state->lidar_state[29], state->lidar_state[30], state->lidar_state[31]);
}

int		launch_race(t_status *state)
{
  int		i;
  int		max;

  fprintf(stderr, "Race launched\n");
  while (my_strcmp(state->add_info, "Checkpoint d\'arrive") != 0)
  {
    if (get_all_state(state) == -1)
      return (-1);
    print_state(state);
    i = 1;
    max = 0;
    while (i < 32)
    {
      if (state->lidar_state[max] < state->lidar_state[i])
	max = i;
      ++i;
    }
    fprintf(stderr, "the max is : %d => %f\n", max, state->lidar_state[max]);

    fprintf(stderr, "the needed angle is : %d => %f\n", (max * 2) - 30, ((double)((max * 2) - 30)) / 30);
    car_forward(0.9);
    wheels_dir((float)((max * 2) - 30) / 30);
    while (1);

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
