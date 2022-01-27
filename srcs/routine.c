/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:43:22 by alemarch          #+#    #+#             */
/*   Updated: 2022/01/27 20:09:44 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine(void *args)
{
	t_philo	*philo;

	philo = (t_philo *)args;
	int i = 0;
	while (i < 20)
	{
		printf("%u philo %i is eating\n", get_timenow(), philo->id);
		usleep(100000);
		printf("%u philo %i is sleeping\n", get_timenow(), philo->id);
		usleep(100000);
		printf("%u philo %i is thinking\n", get_timenow(), philo->id);
		usleep(100000);
		i++;
	}
	return (NULL);
}
