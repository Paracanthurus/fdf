/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_bonus.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:52:53 by aokubo            #+#    #+#             */
/*   Updated: 2022/08/07 01:15:24 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_BONUS_H
# define FDF_BONUS_H

# include<math.h>
# include<float.h>
# include"../minilibx-linux/mlx_int.h"
# include"../minilibx-linux/mlx.h"
# include"../get_next_line/get_next_line_bonus.h"
# include"../ft_printf/ft_printf.h"

# ifndef X
#  define X 960
# endif
# ifndef Y
#  define Y 540
# endif

# define SUCCESS 1
# define FAILURE 0

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	s_point {
	double			x;
	double			y;
	double			z;
	int				color;
	struct s_point	*next;
}				t_point;

typedef struct	s_point_int {
	int	x;
	int	y;
	int	z;
	int	color;
}				t_point_int;

typedef struct	s_limit {
	double	x_min;
	double	x_max;
	double	y_min;
	double	y_max;
}				t_limit;

typedef struct	s_color {
	int t;
	int	r;
	int	g;
	int	b;
}				t_color;

int		ft_isspace(char c);
int		ft_abs(int x);
int		ft_atox(char *str);
int		ft_calcolor_dx(t_point_int *point, t_point_int *s, t_point_int *t);
int		ft_calcolor_dy(t_point_int *point, t_point_int *s, t_point_int *t);
void	ft_calline_dx(t_point_int *point, t_point_int *s, t_point_int *t,
						int *err);
void	ft_calline_dy(t_point_int *point, t_point_int *s, t_point_int *t,
						int *err);
int		ft_click_x_hook();
t_point	**ft_col_init(t_list *map);
int		ft_drawimg(t_data *img, t_list **map);
void	ft_dtoi_point(t_point_int *p, t_point *p_dbl);
void	ft_fitting(t_list *map, t_limit *limit);
void	ft_getlimit(t_list *map, t_limit *limit);
char	**ft_gnl_and_split(int fd, char c);
int		ft_isdigit_hex(int c);
int		ft_isspace(char c);
void	ft_itorgb(t_color *rgb, int color);
// int		ft_key_hook(int key,void *p);
int		ft_key_hook(int key);
int		ft_opfile(int argc, char **argv, t_list **map);
void	ft_pointadd_back(t_point **lst, t_point *new);
void	ft_pointclear(void *point);
t_point	*ft_pointlast(t_point *lst);
t_point	*ft_pointnew(double x, double y, double z, int color);
int		ft_putline_map(t_data *img, t_list *map);
void	ft_putline(t_data *img, t_point *s_dbl, t_point *t_dbl);
void	ft_putpixel(t_data *data, int x, int y, int color);
int		ft_readcolor(char *str);
int		ft_readmap(t_list **map, int fd);
int		ft_readpoint(t_point **point, char **z, size_t y, size_t *x0);
int		ft_rgbtoi(t_color *rgb);
void	ft_transform(t_list *map);


#endif
