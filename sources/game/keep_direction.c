/*
** keep_direction.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/keep_direction.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Thu Apr 28 08:40:58 2016 Maxime Pillon
** Last update Thu Apr 28 08:40:58 2016 Maxime Pillon
*/

#include	"../../includes/define.h"

int		keep_direction(t_status *state)
{
  state->wheels_state = 0;
  if (analyse(WHEELS_DIR, wheels_dir(state->wheels_state), state) == -1)
    return (error_message("the tentative  to turn failed"));
  return (0);
}