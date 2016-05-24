/*
** analyse.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/analyse.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue Apr 26 07:46:51 2016 Maxime Pillon
** Last update Tue Apr 26 07:46:51 2016 Maxime Pillon
*/

#include	<stddef.h>
#include	<stdlib.h>
#include	"../../includes/define.h"

#include	<stdio.h>
#include	<unistd.h>

static int	analyse_state_1(int cmd, t_status *state)
{
  char		*line;
  char		**data;
  int		nb;

  (void)cmd;
  if ((line = get_next_line(0)) == NULL)
    return (error_message("get_next_line failed"));
  //write(2, line, my_strlen(line));
  //write(2, "\n", my_strlen(line));
  if ((data = my_str_to_wordtab(line, &nb, ":")) == NULL)
    return (error_message("tab format type failed"));
  /*
  write(2, data[0], my_strlen(data[0]));
  write(2, "\n", 1);
  write(2, data[1], my_strlen(data[1]));
  write(2, "\n", 1);
  write(2, data[2], my_strlen(data[2]));
  write(2, "\n", 1);
  write(2, data[3], my_strlen(data[3]));
  write(2, "\n", 1);
  */
  if (nb != 4 && nb != 3)
    return (error_message("nb arg format type failed"));
  if ((nb = my_getnbr(data[0])) == -1)
    return (error_message("value id is incorrect"));
  else if (check_and_analyse_error(nb) == -1)
    return (-1);
  if (my_strcmp("OK", data[1]) != 0)
    return (error_message("the command failed"));
  if (my_strcmp("No further info", data[3]) != 0)
    state->add_info = my_strdup(data[3]);
  free(line);
  return (0);
}

static int	analyse_state_2(int cmd, t_status *state)
{
  char		*line;
  char		**data;
  int		nb;

  (void)cmd;
  if ((line = get_next_line(0)) == NULL)
    return (error_message("get_next_line failed"));
//  write(2, line, my_strlen(line));
//  write(2, "\n", my_strlen(line));
  fprintf(stderr, "%s \n", line);
  if ((data = my_str_to_wordtab(line, &nb, ":")) == NULL)
    return (error_message("tab format type failed"));
  if (nb != 35 && nb != 36)
    return (error_message("nb arg format type failed"));
  if ((nb = my_getnbr(data[0])) == -1)
    return (error_message("value id is incorrect"));
  else if (check_and_analyse_error(nb) == -1)
    return (-1);
  if (my_strcmp("OK", data[1]) != 0)
    return (error_message("the command failed"));
  if (stock_lidar_data(data, state) == -1)
    return (-1);
  if (my_strcmp("No further info", data[35]) != 0)
    state->add_info = my_strdup(data[35]);
  free(line);
  return (0);
}

static int	stock_last_data(int cmd, t_status *state, char **data)
{
  if (cmd == GET_CURRENT_SPEED)
  {
    if ((state->speed_state = my_get_float(data[3])) == -1)
      return (-1);
  }
  else if (cmd == GET_CURRENT_WHEELS)
  {
    if ((state->wheels_state = my_get_float(data[3])) == -1)
      return (-1);
  }
  return (0);
}

static int	analyse_state_3(int cmd, t_status *state)
{
  char		*line;
  char		**data;
  int		nb;


  if ((line = get_next_line(0)) == NULL)
    return (error_message("get_next_line failed"));
  //write(2, line, my_strlen(line));
  //write(2, "\n", my_strlen(line));
  if ((data = my_str_to_wordtab(line, &nb, ":")) == NULL)
    return (error_message("format type failed"));
  if (nb != 5)
    return (error_message("format type failed"));
  if ((nb = my_getnbr(data[0])) == -1)
    return (error_message("value id is incorrect"));
  else if (check_and_analyse_error(nb) == -1)
    return (-1);
  if (my_strcmp("OK", data[1]) != 0)
    return (error_message("the command failed"));
  if (my_strcmp("No further info", data[4]) != 0)
    state->add_info = my_strdup(data[4]);
  free(line);
  return (stock_last_data(cmd, state, data));
}

int		analyse(int cmd, int response, t_status *state)
{
  fprintf(stderr, "%d %d \n", cmd, response);
  if (response == 1)
    return (analyse_state_1(cmd, state));
  if (response == 2)
    return (analyse_state_2(cmd, state));
  if (response == 3)
    return (analyse_state_3(cmd, state));
  return (0);
}
