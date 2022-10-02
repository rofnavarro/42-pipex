/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:09:22 by rferrero          #+#    #+#             */
/*   Updated: 2022/08/18 15:35:36 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

// open() fork()
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

// read() close() write() access() dup() dup2() execve() pipe() unlink()
# include <unistd.h>

// malloc() free() exit()
# include <stdlib.h>

// perror()
# include <stdio.h>

// strerror()
# include <string.h>

// wait() waitpid()
# include <sys/wait.h>

// printf() libft()
# include "./ft_printf/ft_printf.h"

void	ft_check_args(int argc, char *argv[], char *envp[]);

void	ft_child(char **argv, char **envp, int *fd);

void	ft_error(void);

void	ft_parent(char **argv, char **envp, int *fd);

void	ft_free_matrix(char **matrix);
char	**ft_path_list(char **envp);
char	*ft_path(char *command, char **envp);
void	ft_run(char *argv, char **envp);

#endif