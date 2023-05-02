#include <stdio.h>
/**
  *main - entry point
  *Return: always 0 (Success)
  */
int main(void)
{         printf("Size of a char: %d byte(s)", Sizeof(char));  
          printf("Size of an int: %d byte(s)", Sizeof(int)); 
          printf("Size of a long: %d byte(s)", Sizeof(long int));
          printf("Size of a long long int: %d byte(s)", Sizeof(long long int));
          printf("Size of a float: %d byte(s)", Sizeof(float));
 
         return (0);
}

