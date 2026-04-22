
#include <stdio.h>


char str[]="criando uma matriz de strings a partir de uma string";

int main()
{
    int th=1; // armazena a quantidade de membros ('=1' para primeira palavra na string str[])

    // obtem a quantidade de membros (palavras) usando espaços como referência
    for(int i=0; str[i]!='\0'; i++)
        if(str[i]==' ')th+=1;

    // matriz de strings a ser formada
    char *matrizStrings[th];
    int deslocamento=0; // percorre cada posição na mattiz de strings (para armazenar)


    // forma a matriz de strings com cada palavra na string str[]
    for(int i=0; str[i]!='\0'; i++) {

        if(i==0) {

            matrizStrings[deslocamento]=&str[i];
            deslocamento+=1;


        }

        if(str[i]==' ') {
            i+=1;
            matrizStrings[deslocamento]=&str[i];
            deslocamento+=1;
            i-=1;
            str[i]=0;
        }
    }

    // exibe os membros da matriz de string formada

    for(int i=0; matrizStrings[i]!=0; i++) {
        if(i==th)return 0;
        puts(matrizStrings[i]);
    }

    return 0;
}
