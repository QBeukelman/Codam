#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct
{
    char* key;
    int value;
} item;

void	ft_positive(int nbr);
void	convert_atoi_func(char *str);
void	ft_open(void);
item*	ft_search(item* items, size_t size, const char* key);
int		ft_items(void);
void	ft_code_str(char *result_str);
int		ft_strlen(char *str);

int main(int argc, char **argv)
{
	char *str;
	str = argv[1];
	if(argc == 2)
	{
		convert_atoi_func(str);
		ft_items();
		ft_open();
		
	}
	else
	{
		write(1, "Error", 5);
	}
}

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

void	convert_atoi_func(char *str)
{
	int	i;
	int result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	ft_positive(result);
}	

void ft_positive(int nbr)
{
	if(nbr >= 0)
	{
		printf("Number is an int\n");
	}
	else 
	{
		write (1, "Error", 5);
	}
}

item* ft_search(item* items, size_t size, const char* key)
{
	int i;

	i =0;
	while ((unsigned)i < size)
	{
		if(strcmp(items[i].key, key) == 0)
		{
			return(&items[i]);
		} 
		i++;
	}
	return(NULL);
}

int ft_items(void)
{
	item items[] = {
        {"Eggs", 10}, {"Milk", 42}, {"Bread", 36}, {"Oranges", 7},
        {"Flowers", 11}, {"Cookies", 100}, {"Beers", 200}};
    size_t num_items = sizeof(items) / sizeof(item);

    item* found = ft_search(items, num_items, "Beers");
    if (!found) {
        return 1;
    }
    printf("linear_search: value of 'beers' is %d\n", found->value);
    return 0;
}

void ft_open(void)
{
	int	open_file;
	char	result_str[1000000];

	open_file = open("numbers.dict.txt", O_RDONLY);
	read(open_file, result_str, sizeof(result_str));
	close(open_file);
	//printf("%s", result_str);
	ft_code_str(result_str);
}

void ft_code_str(char *result_str)
{
	int i = 0;
	// Key
	int temp_key_index = 0;
	int key_index = 0;
	char temp_key[40];
	// char *array_key[41];
	char** ptr = (char**)malloc(ft_strlen(result_str) *  sizeof(char*));

	// Value 
	int temp_value_index = 0;
	int value_index = 0;
	char temp_value[20];
	char *array_value[41];

	while(i < 690)
	{ 
		if (result_str[i] >= '0' && result_str[i] <= '9')
		{
			temp_key[temp_key_index] = result_str[i];
			temp_key_index++;
		}
		if (result_str[i] == ':')
		{
			ptr = malloc((ft_strlen(result_str)+ 1) * sizeof(char));
			printf("Malloc: %p\n", ptr);
			ptr[key_index] = temp_key;
			
			// array_key[key_index] = temp_key;
			// printf("Key %d is: %p\n", key_index, array_key[key_index]);
			temp_key_index = 0;
			key_index++;
		}
		if (result_str[i] >= 'a' && result_str[i] <= 'z')
		{
			temp_value[temp_value_index] = result_str[i];
			temp_value_index++;
		}
		if (result_str[i] == '\n')
		{
			array_value[value_index] = temp_value;
		
			temp_value_index = 0;
			value_index++;
			while (temp_value_index < 20)
			{
				temp_value[temp_value_index] = '\0';
				temp_value_index++;
			}
			temp_value_index = 0;
		}
		i++;
	}

	printf("\n\nKey 00 is: %s\n", ptr[3]);
	printf("Value 00 is: %s\n", array_value[0]);
}