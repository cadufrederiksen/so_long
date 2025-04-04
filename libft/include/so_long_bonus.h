/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmarqu <carmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:06:37 by carmarqu          #+#    #+#             */
/*   Updated: 2023/12/05 13:18:36 by carmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "MLX42/MLX42.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include "libft.h"

typedef struct s_texture
{
	mlx_texture_t		*main_l;
	mlx_texture_t		*main_r;
	mlx_texture_t		*colec;
	mlx_texture_t		*floor;
	mlx_texture_t		*exit;
	mlx_texture_t		*wall;
	mlx_texture_t		*hunter_r;
}						t_texture;

typedef struct s_image
{
	mlx_image_t			*main_l;
	mlx_image_t			*main_r;
	mlx_image_t			*colec;
	mlx_image_t			*floor;
	mlx_image_t			*exit;
	mlx_image_t			*wall;
	mlx_image_t			*hunter_r;
}						t_image;

typedef struct s_data
{
	struct s_texture	*text;
	struct s_image		*img;
	mlx_t				*mlx_ptr;
	char				**map;
	int					ver_len;
	int					hor_len;
	int					col_total;
	int					flag_e;
	int					flag_p;
	int					x;
	int					y;
	int					ff_c;
	int					ff_e;
	mlx_image_t			*mv_count;

}						t_data;

int						main(int argc, char **argv);
int						init_game(t_data *data);
int						map_check(char *map_name, t_data *data);
int						border_check(t_data *data);
int						create_text(t_data *data);
void					moves(mlx_key_data_t keydata, void *param);
void					flood_fill(int y, int x, t_data *data);
void					regen_map(t_data *data);
void					init_var(t_data *data);
void					ft_map_free(t_data *data);
void					move_up2(t_data *data);
void					move_down2(t_data *data);
void					move_left2(t_data *data);
void					move_right2(t_data *data);
void					print_moves(t_data *data);

#endif