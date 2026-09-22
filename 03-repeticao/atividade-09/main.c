#include <stdio.h>

int main() {

    int i;
    int aprovadas = 0;
    float nota;

    for (i = 1; i <= 5; i++) {

        printf("Digite sua nota: ");
        scanf("%f", &nota);

        if (nota >= 6.0f) {
            aprovadas++;
        }
    }

    printf("Quantidade de notas maiores ou iguais a 6: %d\n", aprovadas);

    return 0;
}