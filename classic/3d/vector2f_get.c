/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2f_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 15:19:47 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/23 14:03:38 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mlx_helpers.h"

float		get_value2(t_vec2 *vec)
{
	return (vec->x + vec->y);
}