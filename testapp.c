#include <unistd.h>

void	ft_write_num(int n)
{
	if (n > 9)
		ft_write_num(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	testapp(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "TestApp", 7);
		else if (n % 3 == 0)
			write(1, "Test", 4);
		else if (n % 5 == 0)
			write(1, "App", 3);
		else
			ft_write_num(n);
		write(1, "\n", 1);
		n++;
	}
}

int	main(void)
{
	testapp();
	return (0);
}
