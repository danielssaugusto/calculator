#include <stdio.h>

int main() {
    char operacao;
    double numeros[100], resultado = 0;
    int continuar = 1; // Variável para controlar se o usuário deseja continuar
    int contador = 0;

    printf("Bem-vindo(a) a calculadora!\n");

    while (continuar) {
        // operação
        printf("Digite a operação que deseja fazer (+, -, *, / ou 'q' para sair): ");
        scanf(" %c", &operacao); // Adicionado espaço antes de %c para limpar o buffer
        
        if (operacao == 'q') {
            break;
        }

        printf("Digite um número: ");
        scanf("%lf", &numeros[contador]);
        contador++;

        switch (operacao) {
            case '+':
                resultado = 0;
                for (int i = 0; i < contador; i++) {
                    resultado += numeros[i];
                }
                break;
            case '-':
                resultado = numeros[0];
                for (int i = 1; i < contador; i++) {
                    resultado -= numeros[i];
                }
                break;
            case '*':
                resultado = numeros[0];
                for (int i = 1; i < contador; i++) {
                    resultado *= numeros[i];
                }
                break;
            case '/':
                if (numeros[1] != 0)
                    resultado = numeros[0] / numeros[1];
                else {
                    printf("Erro: divisão por zero\n");
                    continuar = 0; // Para sair do loop
                }
                break;
            default:
                printf("Erro: operação inválida\n");
                continuar = 0; // Para sair do loop
                break;
        }

        if (continuar) {
            printf("Resultado: %.2lf\n", resultado);

        }
    }


    printf("Obrigado por usar a calculadora!\n");
    return 0;
}
