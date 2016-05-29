/*
** n4s.h for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/includes/n4s.h
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Apr 25 09:06:31 2016 Maxime Pillon
** Last update Sun May 29 16:06:54 2016 Maxence
*/

#ifndef CPE_2015_N4S_N4S_H
# define CPE_2015_N4S_N4S_H

# ifndef		START_SIMULATION
#  define		START_SIMULATION		(1)
# endif			/* !START_SIMULATION */

# ifndef		STOP_SIMULATION
#  define		STOP_SIMULATION			(2)
# endif			/* !STOP_SIMULATION */

# ifndef		CAR_FORWARD
#  define		CAR_FORWARD			(3)
# endif			/* !CAR_FORWARD */

# ifndef		CAR_BACKWARDS
#  define		CAR_BACKWARDS			(4)
# endif			/* !CAR_BACKWARDS */

# ifndef		WHEELS_DIR
#  define		WHEELS_DIR			(5)
# endif			/* !WHEELS_DIR */

# ifndef		GET_LIDAR
#  define		GET_LIDAR			(6)
# endif			/* !GET_LIDAR */

# ifndef		GET_CURRENT_SPEED
#  define		GET_CURRENT_SPEED		(7)
# endif			/* !GET_CURRENT_SPEED */

# ifndef		GET_CURRENT_WHEELS
#  define		GET_CURRENT_WHEELS		(8)
# endif			/* !GET_CURRENT_WHEELS */

# ifndef		CYCLE_WAIT
#  define		CYCLE_WAIT			(7)
# endif			/* !CYCLE_WAIT */

# ifndef                SIMU_N_LAUNCH
#  define               SIMU_N_LAUNCH			(0)
# endif                 /* !SIMU_N_LAUNCH */

# ifndef                NO_ERROR
#  define               NO_ERROR			(1)
# endif                 /* !NO_ERROR */

# ifndef                SIMU_RUN
#  define               SIMU_RUN			(2)
# endif                 /* !SIMU_RUN */

# ifndef                ERROR_N_DETAIL
#  define               ERROR_N_DETAIL			(3)
# endif                 /* !ERROR_N_DETAIL */

# ifndef                ERROR_CHECKPOINT
#  define               ERROR_CHECKPOINT		(4)
# endif                 /* !ERROR_CHECKPOINT */

# ifndef                SIM_COMPONENT_LOAD_FAILURE
#  define               SIM_COMPONENT_LOAD_FAILURE	(5)
# endif                 /* !SIM_COMPONENT_LOAD_FAILURE */

# ifndef                NETWORK_OPERATION_FAILURE
#  define               NETWORK_OPERATION_FAILURE	(6)
# endif                 /* !NETWORK_OPERATION_FAILURE */

# ifndef                SERVER_SIDE_ERROR
#  define               SERVER_SIDE_ERROR		(7)
# endif                 /* !SERVER_SIDE_ERROR */

# ifndef                CLIENT_SIDE_ERROR
#  define               CLIENT_SIDE_ERROR		(8)
# endif                 /* !CLIENT_SIDE_ERROR */

# ifndef                EOF_REACHED
#  define               EOF_REACHED			(9)
# endif                 /* !EOF_REACHED */

# ifndef                SIMU_OK_END
#  define               SIMU_OK_END			(10)
# endif                 /* !SIMU_OK_END */

# ifndef                EMPTY_COMMAND
#  define               EMPTY_COMMAND			(11)
# endif                 /* !EMPTY_COMMAND */

# ifndef                UNKNOW_COMMAND
#  define               UNKNOW_COMMAND			(12)
# endif                 /* !UNKNOW_COMMAND */

# ifndef                WRONG_ARGUMENT
#  define               WRONG_ARGUMENT			(13)
# endif                 /* !WRONG_ARGUMENT */

# ifndef                TOO_MANY_ARGS
#  define               TOO_MANY_ARGS			(14)
# endif                 /* !TOO_MANY_ARGS */

# ifndef                PIPELINE_FAILURE
#  define               PIPELINE_FAILURE		(15)
# endif                 /* !PIPELINE_FAILURE */

# ifndef                UNEXPECTED_ARG_VALUE
#  define               UNEXPECTED_ARG_VALUE		(16)
# endif                 /* !UNEXPECTED_ARG_VALUE */

# ifndef                CAMERA_INFOGET_FAILURE
#  define               CAMERA_INFOGET_FAILURE		(17)
# endif                 /* !CAMERA_INFOGET_FAILURE */

# ifndef                CMD_NOT_FOUND
#  define               CMD_NOT_FOUND			(18)
# endif                 /* !CMD_NOT_FOUND */

# ifndef                SIMU_UP_RUNNING
#  define               SIMU_UP_RUNNING			(19)
# endif                 /* !SIMU_UP&RUNNING */

# ifndef		ANGLE_DIST
#  define		ANGLE_DIST			(600)
# endif			/* !ANGLE_DIST */

# ifndef		ANGLE_MAX
#  define		ANGLE_MAX			(2 * ANGLE_DIST)
# endif			/* !ANGLE_MAX */

typedef struct s_status
{
  float		*lidar_state;
  float		speed_state;
  float		wheels_state;
  char		*add_info;
}		t_status;

#endif //CPE_2015_N4S_N4S_H
