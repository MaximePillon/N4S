/*
** need_turn.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/need_turn.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue Apr 26 16:23:03 2016 Maxime Pillon
** Last update Tue Apr 26 16:23:03 2016 Maxime Pillon
*/

#include	"../../includes/define.h"

int		need_to_turn(t_status *state)
{
  state->wheels_state += 1,25;
  state->wheels_state %= 2;
  if (analyse(WHEELS_DIR, wheels_dir(state->wheels_state), state) == -1)
    return (error_message("the tentative  to turn failed"));
  return (0);
}
