#include <stdio.h>

//><><>< Rainha <><><><>
void RainhaDireita(int casas){
    if (casas > 0){
        printf("Direita\n");    
        RainhaDireita(casas - 1);
    }   
}
void RainhaEsquerda(int casas){
    if (casas > 0){
        printf("Esquerda\n");    
        RainhaEsquerda(casas - 1);
    }
}
void RainhaCima(int casas){  
    if (casas > 0){
        printf("Cima\n");    
        RainhaCima(casas - 1);
    }
}
void RainhaBaixo(int casas){

    if (casas > 0){
        printf("Baixo\n");    
        RainhaCima(casas - 1);
    }
}
void RainhaDireitaCima(int casas){
    if (casas > 0){
        printf("Direita Cima\n");    
        RainhaDireitaCima(casas - 1);
    }
}
void RainhaDireitaBaixo(int casas){
    if (casas > 0){
        printf("Direita Baixo\n");    
        RainhaDireitaBaixo(casas - 1);
    }
}
void RainhaEsquerdaCima(int casas){
    if (casas > 0){
        printf("Esquerda Cima\n");    
        RainhaEsquerdaCima(casas - 1);
    }
}
void RainhaEsquerdaBaixo(int casas){
     if (casas > 0){
        printf("Esquerda baixo\n");    
        RainhaEsquerdaBaixo(casas - 1);
    }
}

//~~~~~ Torre ~~~~
void TorreDireita(int casas){
    if (casas > 0){
        printf("Direita\n");    
        TorreDireita(casas - 1);
    }   
}
void TorreEsquerda(int casas){
    if (casas > 0){
        printf("Direita\n");    
        TorreEsquerda(casas - 1);
    }   
}
void TorreCima(int casas){
    if (casas > 0){
        printf("Direita\n");    
        TorreCima(casas - 1);
    }   
}
void TorreBaixo(int casas){
    if (casas > 0){
        printf("Direita\n");    
        TorreBaixo(casas - 1);
    }   
}

//***** Bispo *****
void BispoDireitaCima(int casas){
    if (casas > 0){
        printf("Direita Cima\n");
        BispoDireitaCima(casas - 1);
    }    
}
void BispoDireitaBaixo(int casas){
    if (casas > 0){
        printf("Direita Baixo\n");
        BispoDireitaBaixo(casas - 1);
    }    
}
void BispoEsquerdaCima(int casas){
    if (casas > 0){
        printf("Esquerda Cima \n");
        BispoEsquerdaCima(casas - 1);
    }    
}
void BispoEsquerdaBaixo(int casas){
    if (casas > 0){
        printf("Esquerda Baixo\n");
        BispoEsquerdaBaixo(casas - 1);
    }    
}



int main(){
    
    int torre = 0, rainha, bispo = 0, cavalo = 1; // peças
    int opcaomenu, opcaomovimento; //escolhe qual peça sera movida, e qual o movimento  
    int quantidade;

do { //Menu escolha de peças
    printf("Escolha uma Peça\n");
    printf("1. Mover a Rainha;\n");
    printf("2. Mover o Bispo;\n");
    printf("3. Mover a Torre;\n");
    printf("4. Mover o Cavalo;\n");
    printf("5. Sair;\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcaomenu);

    switch(opcaomenu) {
    case 1: // Rainha 
    //Menu movimento Rainha
        printf("* Você escolheu a Rainha\n");
        printf("Escolha o movimento:\n");
        printf("1. Direita;\n");
        printf("2. Esquerda;\n");
        printf("3. Cima;\n");
        printf("4. Baixo;\n");
        printf("5. Direita Cima;\n");
        printf("6. Direita Baixo;\n");
        printf("7. Esquerda Cima;\n");
        printf("8. Esquerda Baixo;\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcaomovimento);
        switch (opcaomovimento) //Movimentaçao Rainha
        {
        case 1:// Direita
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    RainhaDireita(quantidade);
        break;
        case 2:// Esquerda
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    RainhaEsquerda(quantidade);
        break;
        case 3:// Cima
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    RainhaCima(quantidade);
        break;
        case 4:// Baixo
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    RainhaBaixo(quantidade);
        break;
        case 5:// Direita Cima
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    RainhaDireitaCima(quantidade);
        break;
        case 6:// Direita Baixo
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    RainhaDireitaBaixo(quantidade);         
        break;
        case 7:// Esquerda Cima
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    RainhaEsquerdaCima(quantidade);
        break;
        case 8: //Esquerda Baixo
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    RainhaEsquerdaBaixo(quantidade);
        break;
        default:
           printf("Escolha errada perdeu a vez :( \n");
            break;
        }
    break;
        
    case 2: // Bispo
    //Menu Movimento Bispo
        printf("* Você escolheu o Bispo\n");
        printf("Escolha o movimento:\n");
        printf("1. Direita Cima;\n");
        printf("2. Direita Baixo;\n");
        printf("3. Esquerda Cima;\n");
        printf("4. Esquerda Baixo;\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcaomovimento); // Movimentação Bispo

        switch (opcaomovimento)
        {
        case 1:// Direita Cima
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    BispoDireitaCima(quantidade);
        break;
        case 2://Direita Baixo
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    BispoDireitaBaixo(quantidade);
        break;        
        case 3://Esquerda Cima
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    BispoEsquerdaCima(quantidade);
        break;
        case 4://Esquerda Baixo
            printf("Digite quantas casas sera movida: \n");
                scanf("%d", &quantidade);
                    BispoEsquerdaBaixo(quantidade);
        break;
        
        default:
        printf("Escolha errada perdeu a vez :( \n");
            break;
        }
    break;

    case 3://Torre
        printf("* Você escolheu a Torre\n");
        printf("Escolha o movimento:\n");
        printf("1. Direita;\n");
        printf("2. Esquerda;\n");
        printf("3. Cima;\n");
        printf("4. Baixo;\n");
        scanf("%d", &opcaomovimento);
    
    switch (opcaomovimento)//Movimentação Torre
    {
    case 1://Direita 
        printf("Digite quantas casas sera movida: \n");
            scanf("%d", &quantidade);
                TorreDireita(quantidade);
    break;
    case 2://Esquerda
        printf("Digite quantas casas sera movida: \n");
            scanf("%d", &quantidade);
                TorreEsquerda(quantidade);
    case 3://Cima
        printf("Digite quantas casas sera movida: \n");
            scanf("%d", &quantidade);
                TorreCima(quantidade);
    break;
    case 4://Baixo
        printf("Digite quantas casas sera movida: \n");
            scanf("%d", &quantidade);
                TorreBaixo(quantidade);
    break;        
    default:
        printf("Escolha errada perdeu a vez :( \n");
        break;
    }
    break;
    case 4://Cavalo
    printf("* Você escolheu o Cavalo\n");
    printf("!Cuidado para não cair do tabuleiro!\n");
    printf("Ex: Duas casas // Uma casa:\n"); // Explicação de quantas casas seram andadas 
    printf(" \n");
    printf("1. Direita // Cima;\n");
    printf("2. Direita // Baixo;\n");
    printf("3. Esquerda // Cima;\n");
    printf("4. Esquerda // Baixo;\n");
    printf("5. Cima // Direita;\n");
    printf("6. Baixo // Direita;\n");
    printf("7. Cima // Esquerda;\n");
    printf("8. Baixo // Esquerda;\n");
    scanf("%d", &opcaomovimento);

    switch (opcaomovimento)//Movimentação Cavalo
    {
    case 1: //Direita Cima 
        while (cavalo--)
        {
            for ( int i = 0; i < 2; i++)
            {
                printf("Direita\n"); // imprime Direita duas vezes
            }
                printf("Cima\n"); //imprime Cima
        }
    break;
    case 2: //Direita Baixo
        while (cavalo--)
        {
            for ( int i = 0; i < 2; i++)
            {
                printf("Direita\n"); // imprime Direita duas vezes
            }
                printf("Baixo\n"); //imprime Baixo
        }
    break;
    case 3: //Esquerda Cima
        while (cavalo--)
        {
            for ( int i = 0; i < 2; i++)
            {
                printf("Esquerda\n"); // imprime Esquerda duas vezes
            }
                printf("Cima\n"); //imprime Cima
        }
    break;
    case 4: //Esquerda Baixo
        while (cavalo--)
        {
            for ( int i = 0; i < 2; i++)
            {
                printf("Esquerda\n"); // imprime Esquerda duas vezes
            }
                printf("Baixo\n"); //imprime Baixo
        }
    break;     
    case 5: // Cima Direita
        while (cavalo--)
        {
            for ( int i = 0; i < 2; i++)
            {
                printf("Cima\n"); // imprime Cima duas vezes
            }
                printf("Direita\n"); //imprime Direita
        }
    break;
    case 6: // Baixo Direita
    while (cavalo--)
    {
        for ( int i = 0; i < 2; i++)
        {
            printf("Baixo\n"); // imprime Baixo duas vezes
        }
            printf("Direita\n"); //imprime Direita
    }
    break;
    case 7: // Cima Esquerda
    while (cavalo--)
    {
        for ( int i = 0; i < 2; i++)
        {
            printf("Cima\n"); // imprime Cima duas vezes
        }
            printf("Esquerda\n"); //imprime Esquerda
    }
    break;
    case 8: // Baixo Esquerda
        while (cavalo--)
        {
            for ( int i = 0; i < 2; i++)
            {
                printf("Baixo\n"); // imprime Baixo duas vezes
            }
                printf("Esquerda\n"); //imprime Esquerda 
        }
    break;

    default:
        printf("Escolha errada perdeu a vez :( \n");
    break;
    }

break;
        
    case 5:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida!!!!!!\n");
    }
} while (opcaomenu != 5);

}