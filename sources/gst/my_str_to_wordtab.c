/*
** my_str_to_wordtab.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/my_str_to_wordtab.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Thu May 05 12:53:20 2016 Maxime Pillon
** Last update Thu May 05 12:53:20 2016 Maxime Pillon
*/

#include	<stdlib.h>
#include	"../../includes/define.h"

static void		find_word(char			*str,
			  char			*separator,
			  int			*cpt_str)
{
  int		cpt;

  while (str[*cpt_str] != '\0')
    {
      cpt = 0;
      while (separator[cpt] != '\0')
	{
	  if (separator[cpt] == str[*cpt_str])
	    return ;
	  ++cpt;
	}
      ++*cpt_str;
    }
}

static void		move_to_word(char		*str,
			     char		*separator,
			     int		*cpt_str)
{
  int		cpt;
  int		check;

  while (str[*cpt_str] != '\0')
    {
      cpt = 0;
      check = 1;
      while (check && separator[cpt] != '\0')
	{
	  if (separator[cpt] == str[*cpt_str])
	    check = 0;
	  ++cpt;
	}
      if (check)
	return ;
      ++*cpt_str;
    }
}

static char		**my_make_tab(char		**tab,
					 char		*str,
					 int		nbr_words,
					 char		*separator)
{
  int		cpt_tab;
  int		cpt_str;
  int		cpt_str_old;

  cpt_tab = 0;
  cpt_str = 0;
  while (cpt_tab != nbr_words)
    {
      move_to_word(str, separator, &cpt_str);
      cpt_str_old = cpt_str;
      find_word(str, separator, &cpt_str);
      if ((tab[cpt_tab] = malloc((cpt_str - cpt_str_old + 1)
				 * sizeof(char))) == NULL)
	return (0);
      tab[cpt_tab][0] = '\0';
      my_strncat(tab[cpt_tab++], &str[cpt_str_old], cpt_str - cpt_str_old);
    }
  tab[cpt_tab] = NULL;
  return (tab);
}

static int		my_counter_words(char		*str,
					   char		*separator)
{
  int		cpt;
  int		nbr_words;

  cpt = 0;
  nbr_words = 0;
  while (str[cpt] != '\0')
    {
      move_to_word(str, separator, &cpt);
      find_word(str, separator, &cpt);
      ++nbr_words;
    }
  return (nbr_words);
}

char		**my_str_to_wordtab(char	*str,
					int	*nbr_words,
					char	*separator)
{
  char		**tab;

  *nbr_words = my_counter_words(str, separator);
  if ((tab = malloc(sizeof(char *) * (*nbr_words + 1))) == NULL)
    return (0);
  tab = my_make_tab(tab, str, *nbr_words, separator);
  return (tab);
}
