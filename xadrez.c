#include <stdio.h>

// Desafio de Xadrez - MateCheck
void mtorre(int peça) {
  if (peça > 0) {
    mtorre(peça - 1);
    printf("%d - Direita. \n", peça);
  }
}
void mbispo(int peça) {
  if (peça > 0){
    mbispo(peça - 1);
    printf("%d - Cima, direita. \n", peça);
  }
}
void mrainha(int peça) {
  if (peça > 0){
    mrainha(peça - 1);
    printf("%d - Esquerda. \n", peça);
  }
}


int main() {

    int option, play, peça;

    do
    {
     printf("\n#####---DESAFIO DE XADREZ---#####\n");
     printf("1. Jogar \n");
     printf("2. Regras \n");
     printf("3. sair! \n");
     printf("Escolha uma opcção:");
     scanf("%d", &option);

     switch(option) {

     case 1:
     printf("\n **********Escolha uma peça para jogar********** \n");
     printf("1. Torre \n");
     printf("2. Bispo \n");
     printf("3. Rainha \n");
     printf("4. Cavalo \n");
     printf("Escolha uma peça:");
     scanf("%d", &play);

     switch (play)
     {
     case 1:
        printf("Número de movimentos:");
        scanf("%d", &peça);
        mtorre(peça);
        break;

    case 2:
        printf("Número de movimentos:");
        scanf("%d", &peça);
        mbispo(peça);
        break;
    
    case 3:
        printf("Número de movimentos:");
        scanf("%d", &peça);
        mrainha(peça);
        break;
    
    case 4:
       printf("Escolha uma direção: \n");
       printf("1. Passo em L \n");
       printf(">:");
       scanf("%d", &peça);

       switch (peça)
       {
        case 1:
           for ( int i = 1; i <= 1; i++){
             for ( int j = 1; j <= 2; j++) {
                printf("%d - PARA CIMA! \n", j);
             } printf("3 - Direita. \n");
           }
           
        break;

        case 2: {
           int i_bispo = 1;   
            while (i_bispo <= peça) {       
                 printf("%d - Cima, Direita. \n", i_bispo);    
                     i_bispo++;    }  
        break;   }

        case 3: {
          int i_rainha = 1;   
           do {   
              printf("%d - Esquerda. \n", i_rainha);
                 i_rainha++;  
                 } while (i_rainha <= peça);   
                  break; }
       case 4:
       printf("Movimento do Cavalo: 2 casas para Cima, 1 para Direita \n");    
       for (int passo_vertical = 1; passo_vertical <= 2; passo_vertical++) { 
         printf("%d - Cima \n", passo_vertical);  }    
         int passo_horizontal = 1;    
         while (passo_horizontal <= 1) {  
                  printf("%d - Direita \n", passo_horizontal);  
                        passo_horizontal++;  }  
                          break;
       default:
            printf("Opção Inválida!!!................ \n");
        break;
       }
       
    break;
     default:
          printf("Opção inválida!!! \n");
        break;
     }
     break;

     case 2:
     printf("\n --------Regras de movimentação do XADREZ-------- \n");
     printf("1. Torre: Move-se em linha reta horizontalmente ou verticalmente. Até 5 casas! \n");
     printf("2. Bispo: Move-se na diagonal. Até 5 casas! \n");
     printf("3. Rainha: Move-se em todas as direções. Até 8 casas! \n");
     printf("4.  O movimento do Cavalo agora será para cima e para a direita, em L (duas casas para cima e uma para a direita). \n");
     break;

     case 3:
     printf("\n Saindo, até a proxima............ \n");
     break;

     default: 
         printf("Opção Inválida!!! \n");
     }
        
    } while (option != 3);

    return 0;
}
