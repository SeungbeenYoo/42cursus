#include "libft.h"

int ft_isascii(int c){
    return(ft_isalpha(c) || ft_isdigit(c));
}