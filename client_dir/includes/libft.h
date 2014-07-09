/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:24:17 by jpontat           #+#    #+#             */
/*   Updated: 2014/02/09 19:33:30 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	**ft_strsplit(const char *s, char c);
char	*ft_strjoin(char const *s1, char const*s2);
char	*ft_strtrim(char const *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_striter(char *s, void (*f)(char *));
void	ft_strclr(char *s);
void	ft_strdel(char **as);
void	ft_memdel(void **app);
void	*ft_memalloc(size_t size);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *s1, void const *s2, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memset(void *s1, int c, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_memchr(const char *s, int c, size_t n);
void	*ft_realloc(char ptr, size_t size);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnew(size_t size);
char	*ft_strcpy(char *s1, char const *s2);
char	*ft_strncpy(char *s1, char const *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *s1, const char *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *nptr);
int		ft_tolower(int c);
int		ft_toupper(int c);


#endif
