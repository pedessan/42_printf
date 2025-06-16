/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:25:27 by pdessant          #+#    #+#             */
/*   Updated: 2024/12/16 10:24:20 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd, int *ret)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("null", fd, ret);
		return ;
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], fd, ret);
		i++;
	}
}
/* int	main()
{
	char	s[] = "ciao! come stai?";
	int	fd;
	fd = open("prova.txt", O_WRONLY);
	ft_putstr_fd(s, fd);
	close(fd);
	return (0);
} */
