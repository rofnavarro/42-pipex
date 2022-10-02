/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:44:12 by rferrero          #+#    #+#             */
/*   Updated: 2022/08/18 15:38:39 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	ft_free_matrix(char **matrix)
{
	int	i;

	i = -1;
	while (matrix[++i])
		free(matrix[i]);
	free(matrix);
}

char	**ft_path_list(char **envp)
{
	int	i;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	return (ft_split(envp[i] + 5, ':'));
}

char	*ft_path(char *command, char **envp)
{
	char	**paths;
	char	*path;
	char	*part_path;
	int		i;

	i = 0;
	paths = ft_path_list(envp);
	while (paths[i])
	{
		part_path = ft_strjoin(paths[i], "/");
		path = ft_strjoin(part_path, command);
		free(part_path);
		if (access(path, F_OK) == 0)
		{
			ft_free_matrix(paths);
			return (path);
		}
		else
			free(path);
		i++;
	}
	ft_free_matrix(paths);
	return (NULL);
}

void	ft_run(char *argv, char **envp)
{
	char	**command;
	char	*path;

	command = ft_split(argv, ' ');
	path = ft_path(command[0], envp);
	if (path == NULL)
	{
		ft_free_matrix(command);
		ft_error();
	}
	if (execve(path, command, envp) == -1)
	{
		free(path);
		ft_free_matrix(command);
		ft_error();
	}
}
