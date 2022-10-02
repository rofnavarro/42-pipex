/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_child.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:02:34 by rferrero          #+#    #+#             */
/*   Updated: 2022/08/18 11:59:27 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	ft_child(char **argv, char **envp, int *fd)
{
	int	file_in;

	close(fd[0]);
	file_in = open(argv[1], O_RDONLY, 0777);
	if (file_in == -1)
		ft_error();
	dup2(fd[1], STDOUT_FILENO);
	dup2(file_in, STDIN_FILENO);
	ft_run(argv[2], envp);
}
