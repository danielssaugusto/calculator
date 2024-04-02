#include<stdio.h>

int main()
{
    char operacao;
    double numeros[2], resultado = 0;
    
    // operação
    printf("Bem vindo(a) a calculadora!\n");
    printf("Digite a operação que deseja fazer (+, -, *, /): ");
    scanf("%c", &operacao);
    
    for(int i = 0; i < 2; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    }
    
    switch(operacao) {
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
            else
                printf("Erro: operação por zero\n");    
            break;
        default:
            printf("Erro: você escreveu uma operação inválida");
            return 1; // Retorna 1 para indicar erro
    }
    
    printf("Resultado: %.2lf\n", resultado);
    
    return 0;
}
