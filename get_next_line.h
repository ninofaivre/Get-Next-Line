/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:41:17 by nino              #+#    #+#             */
/*   Updated: 2021/09/01 13:10:45 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

void	*ft_calloc(int i);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		ft_search(char	*str, char c);
char	*ft_strjoinmod(char *str1, char *str2);
void	ft_strcpymod(char *rest, char *buffer);

#endif
