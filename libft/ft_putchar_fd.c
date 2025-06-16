/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:17:29 by pdessant          #+#    #+#             */
/*   Updated: 2024/12/02 11:02:09 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd, int *ret)
{
	write (fd, &c, 1);
	*ret += 1;
}

/* int	main()
{
	int	fd = open("prova.txt", O_WRONLY);
	ft_putchar_fd('a', fd);
	close(fd);
	return (0);
} */
