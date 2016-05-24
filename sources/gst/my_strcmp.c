/*
** my_strcmp.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/my_strcmp.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Thu May 05 12:50:46 2016 Maxime Pillon
** Last update Thu May 05 12:50:46 2016 Maxime Pillon
*/

#include 	"../../includes/define.h"

int		my_strcmp(char *str1, char *str2)
{
  int		cpt;

  cpt = 0;
  while (str1[cpt] && str2[cpt] && str1[cpt] == str2[cpt])
    ++cpt;
  if (!str1[cpt] && !str2[cpt])
    return (0);
  return (-1);
}