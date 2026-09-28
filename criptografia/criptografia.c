#include <stdio.h>
#include <string.h>
#include <ctype.h>

void criptografar(char *texto, int k) {

    while (*texto != '\0') 
    { 
        // Enquanto não chegar ao final da string
        if(isalpha(*texto)) { // Verifica se o caractere é uma letra
            // Aplica a cifra de César, deslocando o caractere pelo valor de k
            *texto = (toupper(*texto) - 'A' + k) % 26 + 'A'; // Converte para maiúscula e aplica o deslocamento
            }
        texto++; // Avança para o próximo caractere      
    }
        
}

int main(){

    char texto[100];
    int valorK;

    printf("Digite uma frase: ");
    scanf(" %99[^\n]", texto); // Lê a frase até o '\n' (Enter)

    printf("Digite um valor para K:");
    scanf("%d", &valorK);
    if (valorK == 0) {
        printf("O valor de K não pode ser zero. Por favor, insira um valor diferente de zero.\n");
        return 1; // Encerra o programa com código de erro
    }
    criptografar(texto, valorK);
    printf("Texto criptografado: %s\n", texto);


}