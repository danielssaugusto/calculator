#include<stdio.h>

int main()
{
    char operacao;
    int count;
    double numero, resultado;
    
    // operação
    printf("Bem vindo(a) a calculadora!\n");
    printf("Digite a operação que deseja fazer (+, -, *, /): ");
    scanf("%c", &operacao);
    
    for(count=1; count<=2; count++)
    {
        printf("Digite um número: ");
        scanf("%lf", &numero);
    }
    
    switch(operacao) {
        case '+':
            resultado = numero + numero;
            break;
        case '-':
            resultado = numero - numero;
            break;
        case '*':
            resultado = numero * numero;
            break;
        case '/':
            resultado = numero / numero;
            break;
        
        default:
            printf("Erro: você escreveu uma operação inválida");
            return 1;
    }
    
    printf("%lf, %c, %lf, %lf", operacao, numero, resultado);
    
    return 0;
}
