/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <rciufo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 12:42:14 by rciufo            #+#    #+#             */
/*   Updated: 2026/09/29 14:16:38 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NO LIBFT
// NO lseek()
// NO GLOBAL VARIABLES
//
//
char	*srchend(char *start)
{
	char	*c;

	c = start;
	while(c != '\n')
		c++;
	return(c);
}
char	*get_next_line(int fd)
{
	//leggere una riga per volta
	//terminare con \n, tranne se e' l'ultima riga
	//errore o niente da leggere NULL
	//
}

//ssize_t read(int fildes, void *buf, size_t nbyte);
//		da dove			quanti byte
//cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
//Does your function still work if the BUFFER_SIZE value is 9999? If it is 1? 10000000? Do you know why?
/*Try to read as little as possible each time get_next_line() is
called. If you encounter a new line, you have to return the current
line.
Don’t read the whole file and then process each line.*/

// BONUS se e' semplice farlo con una sola variabile 

