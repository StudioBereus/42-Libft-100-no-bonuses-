/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:32:43 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/12 17:04:05 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if(n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if(n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
