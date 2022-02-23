#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	k = ft_strlen(s2);
	str = malloc(sizeof(char) * (i + k) + 1);
	if (!(str))
		return (0);
	i = 0;
	k = 0;
	while (s1[i])
		str[k++] = s1[i++];
	i = 0;
	while (s2[i])
	{
		str[k] = s2[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin3(char *s1, char *s2, char *s3)
{
	char	*tmp;
	char	*tmp2;

	if (!s1 || !s2 || !s3)
		return (NULL);
	tmp = ft_strjoin(s1, s2);
	if (tmp == NULL)
		return (NULL);
	tmp2 = ft_strjoin(tmp, s3);
	free(tmp);
	if (tmp2 == NULL)
		return (NULL);
	return (tmp2);
}

int main(int ac, char **av)
{
    int i;
    int fd;
    char *tmp;

    i = 2;
    tmp = ft_strjoin(av[1], "Makefile");
    fd = open(tmp, O_WRONLY | O_TRUNC | O_CREAT, 0644);
    free(tmp);
    if (fd == -1)
    {
        printf("DA FUCK.1\n");
        return (1);
    }
    close(fd);
    while (i < ac)
    {
        tmp = ft_strjoin3(av[1], av[i], ".hpp");
        fd = open(tmp, O_WRONLY | O_TRUNC | O_CREAT, 0644);
        free(tmp);
        close(fd);
        tmp = ft_strjoin3(av[1], av[i], ".cpp");
        fd = open(tmp, O_WRONLY | O_TRUNC | O_CREAT, 0644);
        free(tmp);
        close(fd);
        i++;
    }
    return (0);
}