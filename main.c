/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:11:27 by sgummy            #+#    #+#             */
/*   Updated: 2021/05/17 12:11:30 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    int k;
    char *line;
    int fd;

    k = 1;
    fd = open("my_test.txt", O_RDONLY);
   // fd = 0;
    while (k == 1)
    {
        k = get_next_line(fd, &line);
        printf("%d\n", k);
        printf("%s\n", line);
    }
    free(line);

//	k = get_next_line(fd, &line);
//	printf("%d\n", k);
//	printf("%s\n", line);
//	free(line);
//
//	k = get_next_line(fd, &line);
//	printf("%d\n", k);
//	printf("%s\n", line);
//	free(line);
//
//	k = get_next_line(fd, &line);
//	printf("%d\n", k);
//	printf("%s\n", line);
//	free(line);
//
//	k = get_next_line(fd, &line);
//	printf("%d\n", k);
//	printf("%s\n", line);
//	free(line);
//
//	k = get_next_line(fd, &line);
//	printf("%d\n", k);
//	printf("%s\n", line);
//	free(line);
//
//	k = get_next_line(fd, &line);
//	printf("%d\n", k);
//	printf("%s\n", line);
//	free(line);

    return (0);
}
