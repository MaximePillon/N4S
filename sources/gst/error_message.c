/*
** error_message.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/error_message.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue Apr 26 07:45:50 2016 Maxime Pillon
** Last update Tue Apr 26 07:45:50 2016 Maxime Pillon
*/

int		error_message(char *str)
{
  write (1, str, my_strlen(str));
  write (1, "\n", 1);
  return (-1);
}
