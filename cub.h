//
// Created by Stoops Summers on 8/19/20.
//

#ifndef CUB3D_CUB_H
#define CUB3D_CUB_H

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
#include <libftprint.h>

#include "get_next_line.h"*/
#include "libft.h"
#include "mlx.h"


typedef struct s_color
{
	int r;
	int g;
	int b;
} t_color;
typedef struct s_map
{
	size_t x;
	size_t y;
} t_map;
typedef struct s_parse
{
	int x;
	int y;
	char *NO;
	char *SO;
	char *WE;
	char *EA;
	char *S;
	t_color *floor;
	t_color *ceilling;
	int temp;
	t_map *map;
	char **maps;

} t_parse;

void error(char *c);

void verification_map(t_parse *parse);

int parser_help_r(char *ln, t_parse *parse);

int parser_help_f(char *ln, t_parse *parse);

int parser_help_c(char *ln, t_parse *parse);

int parser_help_no(char *ln, t_parse *parse);

int parser_help_so(char *ln, t_parse *parse);

void verification_arg(t_parse *parse);

t_parse *init_parse(t_parse *parse);

int parser(t_parse *parse, char **argv);

void check_name_file(char *string);

#endif //CUB3D_CUB_H
