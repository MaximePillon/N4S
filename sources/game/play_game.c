/*
** play_game.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/play_game.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue Apr 26 07:43:16 2016 Maxime Pillon
** Last update Tue Apr 26 07:43:16 2016 Maxime Pillon
*/

#include	<stdlib.h>
#include	"../../includes/define.h"

int		prepare(t_status *state)
{
  if ((state->lidar_state = malloc(sizeof(float) * 32)) == NULL)
    return (-1);
  return (0);
}

int		play_game(t_status *state)
{
  if (prepare(state) == -1)
    return (-1);
  if (analyse(START_SIMULATION, start_simulation(), state) == -1)
    return (error_message("launch of simulation failed"));
  if (launch_race(state) == -1)
    return (-1);
  return (0);
}
