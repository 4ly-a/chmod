#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void bem_vindo(){

    printf("/----------------/\n");
    printf("/ Jogo de Forca /\n");
    printf("/----------------/\n\n\n\n");


}

void visual(char palavra_secreta[]){

        for(int i = 0; i<strlen(palavra_secreta); i++){
            printf("_ ");
        }
        printf("\n\n\n");
}


int main(){
	// o \0 simboliza que o array acabou ali assim melancia só ocupa 8 dos 20 espaços reservados no array palavra_secreta

	setlocale(LC_ALL,"Portuguese");



	char chutes[26];
	char palavra_secreta[20];
	int acertou = 0, enforcou = 0, tentativas = 0;

	sprintf(palavra_secreta, "MELANCIA");

    bem_vindo();
    visual(palavra_secreta);

	do{
            char chute;

            printf("Qual letra ?\tTentativa: %d\n\n| ", tentativas);
            scanf(" %c", &chute);

            chutes[tentativas] = chute;
            tentativas++;
            system("cls");
            bem_vindo();

            for(int i = 0; i < strlen(palavra_secreta); i++){
                    int achou = 0; int jaFoi = 0;

                    for(int j = 0; j < tentativas; j++){
                        if(chutes[j] == palavra_secreta[i]){
                            achou = 1;
                            break;
                        }



                    }

                    if(achou){
                        printf("%c", palavra_secreta[i]);


                    }
                    else{
                        printf("_ ");
                    }

            }

            printf("\n\n\n");



	} while(!acertou && !enforcou);

}


