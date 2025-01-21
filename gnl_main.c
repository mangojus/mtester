/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:10:44 by rshin             #+#    #+#             */
/*   Updated: 2025/01/21 15:11:29 by rshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#include "main.h"

int	main(void)
{
	char	*line;
	int		fd;
	int		count;

	count = 0;
	fd = open("../tests/read_error.txt", O_RDONLY);
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
	fd = open("../tests/read_error.txt", O_RDONLY);
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
