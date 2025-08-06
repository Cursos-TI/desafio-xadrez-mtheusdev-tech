#include <stdio.h>

void mtorre(int peça) {
    if (peça > 0) {
        mtorre(peça - 1);
        printf("%d - Direita.\n", peça);
    }
}

void mbispo(int peça) {
    if (peça > 0) {
        mbispo(peça - 1);
        printf("%d - Cima, direita.\n", peça);
    }
}

void mrainha(int peça) {
    if (peça > 0) {
        mrainha(peça - 1);
        printf("%d - Esquerda.\n", peça);
    }
}

int main() {
    int option, play, peça;

    do {
        printf("\n#####---DESAFIO DE XADREZ---#####\n");
        printf("1. Jogar \n");
        printf("2. Regras\n");
        printf("3. Sair!\n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\n********** Escolha uma peça para jogar **********\n");
                printf("1. Torre\n");
                printf("2. Bispo\n");
                printf("3. Rainha\n");
                printf("4. Cavalo\n");
                printf("Escolha uma peça: ");
                scanf("%d", &play);

                switch (play) {
                    case 1:
                        printf("Número de movimentos: ");
                        scanf("%d", &peça);
                        mtorre(peça);
                        break;

                    case 2:
                        printf("Número de movimentos: ");
                        scanf("%d", &peça);
                        mbispo(peça);
                        break;

                    case 3:
                        printf("Número de movimentos: ");
                        scanf("%d", &peça);
                        mrainha(peça);
                        break;

                    case 4:
                        printf("Movimento do Cavalo: L (2 Cima, 1 Direita) \n");
                        for (int passo_principal = 1; passo_principal <= 3; passo_principal++)
                         {    if (passo_principal <= 2) {        printf("%d - Baixo \n", passo_principal);
                                 for (int sub_passo = 1; sub_passo <= 1; sub_passo++);   
                                 } else { printf("%d - Esquerda \n", passo_principal);  
                                              }}
                        break;

                        switch (peça) {
                            case 1:
                                for (int j = 1; j <= 2; j++) {
                                    printf("%d - Para cima!\n", j);
                                }
                                printf("3 - Direita.\n");
                                break;

                            case 2: {
                                int i_bispo = 1;
                                while (i_bispo <= 5) {
                                    printf("%d - Cima, Direita.\n", i_bispo);
                                    i_bispo++;
                                }
                                break;
                            }

                            case 3: {
                                int i_rainha = 1;
                                do {
                                    printf("%d - Esquerda.\n", i_rainha);
                                    i_rainha++;
                                } while (i_rainha <= 5);
                                break;
                            }

                            default:
                                printf("Direção inválida!\n");
                                break;
                        }
                        break;

                    default:
                        printf("Peça inválida!\n");
                        break;
                }
                break;

            case 2:
                printf("\n-------- Regras de movimentação do XADREZ --------\n");
                printf("1. Torre: Move-se em linha reta horizontalmente ou verticalmente. Até 5 casas.\n");
                printf("2. Bispo: Move-se na diagonal. Até 5 casas.\n");
                printf("3. Rainha: Move-se em todas as direções. Até 8 casas.\n");
                printf("4. Cavalo: Move-se em L (ex: duas casas para cima e uma para direita).\n");
                break;

            case 3:
                printf("\nSaindo... Até a próxima!\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (option != 3);

    return 0;
}

