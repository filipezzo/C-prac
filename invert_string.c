#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int size = 80;
    char *input = malloc(size * sizeof(char));

    if (input == NULL)
    {
        printf("Erro ao alocar memória \n");
        return 1;
    }

    printf("Digite uma string: ");

    fgets(input, size, stdin);

    input[strcspn(input, "\n")] = '\0';

    int start = 0;
    int end = strlen(input) - 1;

    while (start < end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }

    printf("%s\n", input);
    free(input);

    return 0;
}