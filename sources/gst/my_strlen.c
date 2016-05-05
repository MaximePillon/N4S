/*
** my_strlen.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/my_strlen.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Thu May 05 12:59:25 2016 Maxime Pillon
** Last update Thu May 05 12:59:25 2016 Maxime Pillon
*/

#include	"../../includes/define.h"

int		my_strlen(const char *str)
{
  int		counter;

  counter = 0;
  while (str[counter])
    counter++;
  return (counter);
}