#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    
    if (argc == 1) {
        printf("%d\n", sum);
        return 0;
    }
    
    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];
        while (*arg) {
            if (!isdigit(*arg)) {
                printf("Error\n");
                return 1;
            }
            arg++;
        }
        sum += atoi(argv[i]);
    }
    
    printf("%d\n", sum);
    return 0;
}
