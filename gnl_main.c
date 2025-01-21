/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:10:44 by rshin             #+#    #+#             */
/*   Updated: 2025/01/21 16:32:24 by rshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#include "main.h"
/*
int	main(void) // gnl loop till eof
{
	char	*line;
	int		fd;

	fd = open("test", O_RDONLY);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd);
		if (line)
		{
			printf("%s", line);
			free(line);
//			printf(GREEN"main : MEM free at %p\n"RESET, line);
			line = "";
		}
	}
	printf("%s", line);
	close(fd);
	return (0);
}

int	main(void) // gnl loop till eof | two files
{
	char	*line;
	int		fd1;
	int		fd2;

	fd1 = open("test", O_RDONLY);
	fd2 = open("test2", O_RDONLY);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd1);
		if (line)
		{
			printf("%s", line);
			free(line);
//			printf(GREEN"main : MEM free at %p\n"RESET, line);
			line = "";
		}
		line = get_next_line(fd2);
		if (line)
		{
			printf("%s", line);
			free(line);
//			printf(GREEN"main : MEM free at %p\n"RESET, line);
			line = "";
		}
	}
	printf("%s", line);
	close(fd1);
	close(fd2);
	return (0);
}

int	main(void) // wrong fd after 2 gnl | restart | gnl loop
{
	char	*line;
	int		fd;
	int		count;

	count = 0;
	fd = open("test", O_RDONLY);
	line = "";
	while (line != NULL)
	{
		if (count == 2)
			fd = -1;
		line = get_next_line(fd);
		count++;
		if (line)
		{
			printf("%s", line);
			free(line);
//			printf(GREEN"main : MEM free at %p\n"RESET, line);
			line = "";
		}
	}
	printf("%s", line);
	close(fd);
	fd = open("test", O_RDONLY);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd);
		if (line)
		{
			printf("%s", line);
			free(line);
//			printf(GREEN"main : MEM free at %p\n"RESET, line);
			line = "";
		}
	}
	printf("%s", line);
	close(fd);
	return (0);
}*/
