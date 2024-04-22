#include <stdio.h>

int main() {
    char operacao;
    double numeros[2], resultado = 0;
    int continuar = 1; // Variável para controlar se o usuário deseja continuar

    printf("Bem-vindo(a) a calculadora!\n");

    while (continuar) {
        // operação
        printf("Digite a operação que deseja fazer (+, -, *, /): ");
        scanf(" %c", &operacao); // Adicionado espaço antes de %c para limpar o buffer

        printf("Digite o primeiro número: ");
        scanf("%lf", &numeros[0]);

        printf("Digite o segundo número: ");
        scanf("%lf", &numeros[1]);

        switch (operacao) {
            case '+':
                resultado = numeros[0] + numeros[1];
                break;
            case '-':
                resultado = numeros[0] - numeros[1];
                break;
            case '*':
                resultado = numeros[0] * numeros[1];
                break;
            case '/':
                if (numeros[1] != 0)
                    resultado = numeros[0] / numeros[1];
                else {
                    printf("Erro: divisão por zero\n");
                    continuar = 0; // Para sair do loop
                    break;
                }
                break;
            default:
                printf("Erro: operação inválida\n");
                continuar = 0; // Para sair do loop
                break;
        }

        if (continuar) {
            printf("Resultado: %.2lf\n", resultado);

            // Perguntar se o usuário deseja continuar
            printf("Deseja fazer outra operação? (1 - Sim, 0 - Não): ");
            scanf("%d", &continuar);
        }
    }

    printf("Obrigado por usar a calculadora!\n");
    return 0;
}
