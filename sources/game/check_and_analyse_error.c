/*
** check_and_analyse_error.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/game/check_and_analyse_error.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue Apr 26 08:49:31 2016 Maxime Pillon
** Last update Tue Apr 26 08:49:31 2016 Maxime Pillon
*/

#include	"../../includes/define.h"

static int 	check_and_analyse_error_next(int nb)
{
  if (nb == WRONG_ARGUMENT)
    return (error_message("we have an error cause of wrong argument"));
  else if (nb == TOO_MANY_ARGS)
    return (error_message("we have an error cause a wrong number of argument"));
  else if (nb == PIPELINE_FAILURE)
    return (error_message("The pipeline failed"));
  else if (nb == UNEXPECTED_ARG_VALUE)
    return (error_message("we have an error cause of the argument value"));
  else if (nb == CAMERA_INFOGET_FAILURE)
    return (error_message("We have a error to get the camera value"));
  else if (nb == CMD_NOT_FOUND)
    return (error_message("Command not found"));
  return (0);
}

int		check_and_analyse_error(int nb)
{
  if (nb == SIMU_N_LAUNCH)
    return (error_message("simulation can't be launch"));
  else if (nb == ERROR_N_DETAIL)
    return (error_message("we have an error without detail"));
  else if (nb == ERROR_CHECKPOINT)
    return (error_message("we have an error on checkpoint"));
  else if (nb == SIM_COMPONENT_LOAD_FAILURE)
    return (error_message("we have an error on the loading of component"));
  else if (nb == NETWORK_OPERATION_FAILURE)
    return (error_message("we have an error on aa network operation"));
  else if (nb == SERVER_SIDE_ERROR)
    return (error_message("we have an error on the server side"));
  else if (nb == CLIENT_SIDE_ERROR)
    return (error_message("we have an error on the client side"));
  else if (nb == EMPTY_COMMAND)
    return (error_message("we have an error cause of an empty command"));
  else if (nb == UNKNOW_COMMAND)
    return (error_message("we have an error cause of an unknow command"));
  else
    return (check_and_analyse_error_next(nb));
}
