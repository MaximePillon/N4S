/*
** cycle_wait.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/use_cmd/cycle_wait.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 17:49:13 2016 Maxime Pillon
** Last update Mon Apr 25 17:49:13 2016 Maxime Pillon
*/

#include	<unistd.h>

int		cycle_wait(int max)
{
  write (1, "cycle_wait ", 11);
  putnbr(max);
  write(1, "\n", 1);
  return (1);
}
