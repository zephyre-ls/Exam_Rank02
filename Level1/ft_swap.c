/*
Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.
Your function must be declared as follows:
void	ft_swap(int *a, int *b);i*/

void	ft_swap(int *a, int *b)
{
	int	*c;

	*c = *a;
	*a = *b;
	*b = *c;
}
