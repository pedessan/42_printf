/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:31:26 by pdessant          #+#    #+#             */
/*   Updated: 2024/12/02 10:52:56 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd, int *ret)
{
	ft_putstr_fd(s, fd, ret);
	write (fd, "\n", 1);
}
/* int	main()
{
	char	s[] = "ciao! come stai?";
	int	fd;
	fd = open("prova.txt", O_WRONLY);
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
} */
