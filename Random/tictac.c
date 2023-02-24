#include <stdio.h>
#include <locale.h>

int fimjogo();

int main(){
    setlocale(LC_ALL, "");
    char  jogo[9] = {'_', '_', '_', '_', '_', '_', '_', '_', '_'};
    int jogador = 1, escolha = 0, i, final = 0, empate = 0;
    
    printf("Para jogar, escolha um número de 1 à 9 para posicionar um \"X\" (jogador 1) ou \"O\" (jogador 2)\n");
    for (i = 0; i < 9; i++){
        printf("[%c]\t", jogo[i]);
        if (i == 2 || i == 5 || i == 8)
            printf("\n");
    }

    while (final != 1)
    {
        do{
            printf("\nVez do jogador %d: ", jogador);
            scanf("%d", &escolha);
        } while (jogo[escolha-1] != '_');

        if (jogador == 1){
            jogo[escolha-1] = 'X';
            jogador++;
        }
        else{
            jogo[escolha-1] = 'O';
            jogador--;
        }

        for (i = 0; i < 9; i++){
            printf("[%c]\t", jogo[i]);
            if (i == 2 || i == 5 || i == 8)
                printf("\n");
        }
        
        if (fimjogo(jogo) == 1){
            printf("\nO jogador %d venceu!!!", (jogador < 2 ? 2 : 1));
            break;
        }
        else if (empatou(jogo) == 0){
            printf("Deu velha!!!");
            break;
        }
    }
}

int fimjogo(char jogo[]){
    if ((jogo[0] == jogo[1] && jogo[1] == jogo[2] && jogo[2] != '_') || 
    (jogo[3] == jogo[4] && jogo[4] == jogo[5] && jogo[5] != '_') || 
    (jogo[6] == jogo[7] && jogo[7] == jogo[8] && jogo[8] != '_') || 
    (jogo[0] == jogo[3] && jogo[3] == jogo[6] && jogo[6] != '_') || 
    (jogo[1] == jogo[4] && jogo[4] == jogo[7] && jogo[7] != '_') || 
    (jogo[2] == jogo[5] && jogo[5] == jogo[8] && jogo[8] != '_') || 
    (jogo[0] == jogo[4] && jogo[4] == jogo[8] && jogo[8] != '_') || 
    (jogo[2] == jogo[4] && jogo[4] == jogo[6] && jogo[6] != '_'))
        return 1;
    return 0;
}

int empatou(char jogo[]){
    int result = 0, i;
    for (i = 0; i < 9; i++){
        if (jogo[i] == '_')
            result++;
    }
    return result;
}