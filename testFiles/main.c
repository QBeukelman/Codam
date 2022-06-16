#include <stdio.h>
#include <unistd.h>


// Variables - 1 Introduction 
void	variables(void)
{
	int	a;
	int	b;

	a = 42;
	b = 55;
	printf("hello %d world %d\n", a, b);

	a = 0;
	b = 0;
	printf("hello %d world %d\n", a, b);
}

// void ft_putchar(char c);
void	ft_putchar1(char c)
{
	write(1, &c, 1);
}

// Variables 3 - types of variavles 
// display the size of the variable in bytes
void	variables3(void)
{
	char	c;
	int		i;
	float	f;
	double	d;

	c = 'k';
	printf("%lu %d %c\n", sizeof(c), c, c);
	printf("%lu\n", sizeof(i));
	f = 12.37;
	printf("%lu %f\n", sizeof(f), f);
}

// Variables 5 - tables
void	variables5(void)
{
	int	a[10][10];

	a[0][3] = 12;
	a[1][9] = 2;
	printf("%d\n", a[0][3]);
}

// Operatins 2 - incrementation and decrentation
void	operations2(void)
{
	int	i;
	int	a;

	i = 1;
	i++;
	printf("%d\n", i);
}

// Operators 4 - 
void	operations4(void)
{
	int	a;
	int	b;

	a = 42;
	b = 12;

    /* Prints 0 is a and b are not the same */
	printf("%d != %d %d\n", a, b, a != b);

}


// Conditions 2 - switch and break

void	conditions2(void)
{
	int	a;

	a = 72;

	switch(a) {
		case 42:
			printf("found 42\n");
			break;
		case 72:
			printf("found 72\n");
			break;
		case 90:
			printf("found 90\n");
			break;
		default:
			printf("default is the same as else\n");
			break;
    }
}


void conditions3(void) {

	int	a;
	int	b;

	a = 41;

    // b will be 12 if a == 42, otherwise 13
	b = a == 42 ? 12 : 13;

    // b will be 
	b = a == 42 ? a > 40 ? 11 : 12 :13;
	printf("%d\n", b);
}

// Main entry point
int main()
{
	conditions3();
}


