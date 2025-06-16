/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:42:31 by pdessant          #+#    #+#             */
/*   Updated: 2024/12/18 16:29:01 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd, int *ret)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		*ret += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd, ret);
		n *= -1;
	}
	if (n >= 0)
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd, ret);
			ft_putnbr_fd(n % 10, fd, ret);
		}
		else
		{
			ft_putchar_fd(n + 48, fd, ret);
		}
	}
}

/* int	main()
{
	int	n = 2147483647;
	int	fd = open("prova.txt", O_WRONLY);
	ft_putnbr_fd(n, fd);
	close(fd);
	return(0);
} */
