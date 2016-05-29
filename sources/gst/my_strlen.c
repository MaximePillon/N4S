/*
** my_strlen.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/my_strlen.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Thu May 05 12:59:25 2016 Maxime Pillon
** Last update Sun May 29 21:21:30 2016 Maxence
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
