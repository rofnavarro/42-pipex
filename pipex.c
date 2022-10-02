/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:48:45 by rferrero          #+#    #+#             */
/*   Updated: 2022/08/18 14:06:01 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pipex.h"

int	main(int argc, char *argv[], char *envp[])
{
	int		fd[2];
	pid_t	pid;

	ft_check_args(argc, argv, envp);
	if (pipe(fd) == -1)
		ft_error();
	pid = fork();
	if (pid == -1)
		ft_error();
	if (pid == 0)
		ft_child(argv, envp, fd);
	else
	{
		waitpid(pid, NULL, 0 | WNOWAIT);
		ft_parent(argv, envp, fd);
	}
	close(fd[0]);
	close(fd[1]);
	return (0);
}

void	ft_check_args(int argc, char *argv[], char *envp[])
{
	if (argc != 5)
	{
		ft_putstr_fd("Error: Wrong number of arguments\n", 2);
		ft_putstr_fd("Ex.: ./pipex <file1> <cmd1> <cmd2> <file2>\n", 1);
		exit(1);
	}
}
