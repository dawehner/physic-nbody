
#include <stdio.h>
#include <stdlib.h>

int main()
{
        int *ptr;

        ptr = malloc(sizeof *ptr);

        if(!ptr) {
                printf("Speicher kann nicht bereitgestellt werden\n");
        } else {
                printf("Speicher bereitgestellt\n");
                *ptr = 70;
                free(ptr);
        }
  
        return EXIT_SUCCESS;
}