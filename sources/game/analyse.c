/*
** analyse.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/analyse.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue Apr 26 07:46:51 2016 Maxime Pillon
** Last update Tue Apr 26 07:46:51 2016 Maxime Pillon
*/

#include	"../../includes/n4s.h"

static int	analyse_state_1(int cmd, t_status *state)
{
  char		*line;
  char		**data;
  int		nb;

  if ((line = get_next_line(0)) == NULL)
    return (error_message("get_next_line failed"));
  if ((data = my_str_to_wordtab(line, &nb, ":")) == NULL)
    return (error_message("format type failed"));
  if (nb != 4)
    return (error_message("format type failed"));
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

  if ((line = get_next_line(0)) == NULL)
    return (error_message("get_next_line failed"));
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
  if ((state->lidar_state = my_get_float(data[3])) == -1)
    return (-1);
  state->lidar_state *= 32;
  if (my_strcmp("No further info", data[4]) != 0)
    state->add_info = my_strdup(data[4]);
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

static int	analyse_state_2(int cmd, t_status *state)
{
  char		*line;
  char		**data;
  int		nb;

  if ((line = get_next_line(0)) == NULL)
    return (error_message("get_next_line failed"));
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
  if (response == 1)
    return (analyse_state_1(cmd, state));
  if (response == 2)
    return (analyse_state_2(cmd, state));
  if (response == 3)
    return (analyse_state_3(cmd, state));
}
