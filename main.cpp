#include <iostream>

int main() {
    int num, d1, d2, d3, d4;

    
    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &num);


    if (num < 1000 || num > 9999) {
        printf("Erro: O numero deve ter exatamente 4 digitos.\n");
        return 1;
    }

    
    d1 = num / 1000;        
    d2 = (num / 100) % 10;  
    d3 = (num / 10) % 10;   
    d4 = num % 10;          

    if (d1 == d4 && d2 == d3) {
        printf("O numero %d e um palindromo!\n", num);
    } else {
        printf("O numero %d nao e um palindromo.\n", num);
    }

    return 0;
}