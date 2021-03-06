/*
** define.h for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/includes/define.h
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Thu Apr 28 08:46:22 2016 Maxime Pillon
** Last update Thu Apr 28 08:46:22 2016 Maxime Pillon
*/

#ifndef 		CPE_2015_N4S_DEFINE_H
# define 		CPE_2015_N4S_DEFINE_H

# include		"n4s.h"
# include		"get_next_line.h"

float			get_index(t_status *state);
float			get_float(const char *str);
int			turn(t_status *state);
int			stock_lidar_data(char **data, t_status *state);
void			putnbr(int nb);
void			put_float(float nb, int dec);
float			my_get_float(const char *);
int			my_getnbr(const char *);
int			my_strcmp(char *, char *);
char			*my_strncat(char *, char *, int);
int			my_strlen(const char *);
char			*my_strdup(const char *);
char			**my_str_to_wordtab(char *, int *, char *);
int			acceleration(t_status *);
int			analyse(int, int, t_status *);
int			check_and_analyse_error(int);
int			keep_direction(t_status *);
int			launch_race(t_status *);
int			get_all_state(t_status *);
int			need_to_turn(t_status *);
int			play_game(t_status *);
int			error_message(char *str);
int			car_backward(float value);
int			car_forward(float value);
int			cycle_wait(int);
int			get_current_speed(void);
int			get_current_wheels(void);
int			get_lidar(void);
int			start_simulation(void);
int			stop_simulation(void);
int			wheels_dir(float);
float 			speed_need(t_status *state);
float 			angle_need(t_status *state);
float 			angle_correction(t_status *state, float max);

#endif 			/* !CPE_2015_N4S_DEFINE_H */
