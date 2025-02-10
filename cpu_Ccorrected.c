#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    (void)argc;  // Suppress unused parameter warning
    (void)argv;

    unsigned int i, j;
    while (1) 
    {
        j = 1;
        for (i = 1; i <= 10; i++) 
        {
            j = j * i;
        }
        printf("Factorial of 10 is: %u\n", j); // Output the result
        sleep(1); // Add a delay to prevent excessive CPU usage
    }

    return 0;
}
