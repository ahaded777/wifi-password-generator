# include <unistd.h>
# include <sys/time.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
#include <sys/wait.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int count_num(int num)
{
    int i = 0;
    if (num <= 0)
        i = 1;
    else
        i = 0;
    while (num)
    {
        num = num / 10;
        i++;
    }
    return (i);
}

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int is_valid_number(char *arg)
{
    int i;

    i = 0;
    while (arg[i])
    {
        if (!ft_isdigit(arg[i]))
            return (1);
        i++;
    }
    return (0);
}

int check_valid_args(int *fd, char **args)
{
    if ((atoi(args[1]) < 0) || is_valid_number(args[1]))
    {
        ft_putstr_fd("Error: The start number must be greater than 0.\n", 2);
        return (1);
    }
    else if ((atoi(args[2]) < 0) || is_valid_number(args[2]))
    {
        ft_putstr_fd("Error: The end number must be greater than 0.\n", 2);
        return (1);
    }
    else if (atoi(args[1]) >= (atoi(args[2])))
    {
        ft_putstr_fd("Error: The start number must be greater than the end number.\n", 2);
        return (1);
    }
    else if (count_num(atoi(args[2])) > 8)
    {
        ft_putstr_fd("Error: Number exceeds 8 digits.\n", 2);
        return (1);
    }
    return (0);
}
int main (int ac, char **av)
{
    int i;
    int fd;
    
    if (ac != 4)
    {
        ft_putstr_fd("Error: Missing arguments!\n", 2);
        ft_putstr_fd("Usage: ./name_program <start_number> <end_number> <file_name>\n", 2);
        ft_putstr_fd("Example: ./name_program 1 10 output.txt\n", 2);
        return (1);
    }
    fd = 0;
    i = atoi(av[1]);
    if (check_valid_args(&fd, av))
    return (1);
    ft_putstr_fd("PLEASE WAIT ⏳\n", 2);
    sleep(2);
    fd = open(av[3], O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("Error: open");
        return (1);
    }
    dup2(fd, 1);
    while (i <= atoi(av[2]))
    {
        int j = 0;
        while (j < (8 - count_num(i)))
        {
            printf("0");
            j++;
        }
        printf("%d\n", i);
        i++;
    }
    ft_putstr_fd("DONE ✅\n", 2);
    close(fd);
    return (0);
}
