/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/21 11:24:17 by crenault          #+#    #+#             */
/*   Updated: 2015/02/23 17:54:22 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void				test_draw_pixel(t_image *image)
{
	t_color		color;

	color = get_new_color(250, 125, 0, 1.0); // pure orange
	put_pixel_image(image, get_new_pos(20 + 100, 20), color);
}

void				test_print_pixel(t_image *image)
{
	t_color		color;

	color = get_pixel_image(image, get_new_pos(20 + 100, 20));
	printf("%f, %f, %f\n", color.r, color.g, color.b);
}

void				test_draw_pixel_2(t_image *image)
{
	t_color			color;

	color = get_new_color(125, 125, 125, 1.0);
	color = add_color(color, get_new_color(0, 255, 0, 1.0));
	color = sub_color(color, get_new_color(255, 0, 0, 1.0));
	put_pixel_image(image, get_new_pos(20 + 100, 25), color);
}
