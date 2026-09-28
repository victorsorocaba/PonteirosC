#include <stdio.h>
#include <string.h>
#include <ctype.h>

void criptografar(char *Pmsg) {
    int posicao = 1;
    while (*Pmsg != '\0') 
    { 
        if(isalpha(*Pmsg)) {
            if(posicao % 2 != 0) {
                *Pmsg = (toupper(*Pmsg) - 'A' + 1) % 26 + 'A';
            }
            else {
                *Pmsg = (toupper(*Pmsg) - 'A' - 1 + 26) % 26 + 'A';
            }
        }
        Pmsg++;
        posicao++; // Avança para o próximo caractere      
    }
        
}

int main(){

    char mensagem[100];

    while (1) {
        printf("Digite uma frase: ");
        scanf(" %99[^\n]", mensagem);

        if(strcmp(mensagem, "FIM") == 0)
        {
            break;
        }

        criptografar(mensagem); // Chama a função para criptografar a mensagem
        printf("Texto criptografado: %s\n", mensagem); // Exibe a mensagem criptografada
    }
    return 0;
}