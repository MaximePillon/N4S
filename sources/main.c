/*
** main.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/main.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 07:48:43 2016 Maxime Pillon
** Last update Mon Apr 25 07:48:43 2016 Maxime Pillon
*/

#include	"../includes/define.h"

int 		main(void)
{
  t_status	state;

  if (play_game(&state) == -1)
    return (-1);
  return (0);
}
