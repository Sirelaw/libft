/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:10:30 by oipadeol          #+#    #+#             */
/*   Updated: 2021/09/16 18:21:30 by oipadeol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *dest, size_t c);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char a);
int		ft_isprint(char c);
char	*ft_itoa(int n);
// Locates the first occurence of c (converted to an unsigned char) in string s.
void	*ft_memchr(const void *s, int c, size_t n);
// The memcmp() function compares byte string string1 against 
// byte string string2.Both strings are assumed to be n bytes long.
int		ft_memcmp(const char *string1, const char *string2, size_t n);
void	*ft_memcpy(void *dest, const void *source, size_t n);
// The memmove() function copies len bytes from string src to string dst. The 
// two strings may overlap; the copy is always done in a non-destructive manner.
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *dest, int b, size_t c);
void	ft_putchar_fd(char c, int fd);
// Outputs the string ’s’ to the given file descriptor, followed by a newline.
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *str, char c);
char	*ft_strchr(const char *s, int c);
char	*strdup(const char *string1);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *string1, const char *string2, size_t n);
// The strnstr() function locates the first occurrence of the nullterminated
// string needle in the string haystack, not more than n chars are searched.
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
// Allocates (with malloc(3)) and returns a substring from the string ’string’.
// The substring begins at index ’start’ and is of maximum size ’len’.
char	*ft_substr(char const *string, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void(*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));

#endif
