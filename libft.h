#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <string.h>

void *ft_memset(void *dest, int c, size_t n);
void *ft_bzero(void *dest, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr (const void *src, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
int ft_strlen(char *str);
char *ft_strdup(char *src);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, size_t nb);
size_t	ft_strlcat(char *dest, char *src, size_t nb);
char  *ft_strchr(const char *str, int c);
char  *ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_strclr(char *s);
void    ft_striter (char *s, void(*f)(char *));
void    ft_striteri (char *s, void(*f)(unsigned int, char *));
char    *ft_strmap(char const *s, char(*f)(char));
char    *ft_strmapi(char const *s, char(*f)(unsigned int, char));
int     ft_strequ(char const *s1, char const *s2);
int     ft_strcmp(const char *s1, const char *s2);
#endif