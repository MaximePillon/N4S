/*
** acceleration.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/acceleration.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Thu Apr 28 08:43:32 2016 Maxime Pillon
** Last update Sun May 29 21:16:21 2016 Maxence
*/

#include	"../../includes/define.h"

int		acceleration(t_status *state)
{
  state->speed_state = 1;
  if (analyse(CAR_FORWARD, car_forward(state->speed_state), state) == -1)
    return (error_message("the tentative  to turn failed"));
  return (0);
}
