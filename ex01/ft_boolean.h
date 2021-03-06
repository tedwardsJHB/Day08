/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedwards <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:44:23 by tedwards          #+#    #+#             */
/*   Updated: 2020/06/26 09:56:36 by tedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
#include "ft_boolean.h"

void	ft_putstr(char	*str)	

{
	while(*str)
		write(1, str++, 1);
}

t_bool		ft_is_even(int	nbr)
{
	return((EVEN(nbr)) ? TRUE : FALSE);
}
	
	
	int	main(int	argc,char**argv)

{
		ft_print()
		(void)argv;
		
		if(ft_is_even(argc - 1) == TRUE)	
			
			ft_putstr(EVEN_MSG);
		
		else	
			ft_putstr(ODD_MSG);
		
		return(SUCCESS);
	
	}
