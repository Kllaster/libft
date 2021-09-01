#include "libft.h"

void	kl_end(char *str, int exit_code)
{
	if (str != NULL)
	{
		ft_putstr_fd(COLOR_RED, STDERR_FILENO);
		ft_putstr_fd("Error: ", STDERR_FILENO);
		ft_putstr_fd(COLOR_GREEN, STDERR_FILENO);
		ft_putstr_fd(str, STDERR_FILENO);
		ft_putstr_fd("\n", STDERR_FILENO);
		ft_putstr_fd(COLOR_RESET, STDERR_FILENO);
	}
	exit(exit_code);
}
