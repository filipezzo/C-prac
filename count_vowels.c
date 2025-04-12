#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int tamanho = 100;
    char *input = malloc(100 * sizeof(char));
    int count = 0;

    if (input == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Informe uma palavra: ");

    fgets(input, tamanho, stdin);

    input[strcspn(input, "\n")] = '\0';

    for (int i = 0, j = strlen(input); i < j; i++)

    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
        {
            count++;
        }
    }

    printf("%i\n", count);

    free(input);
    return 0;
}
