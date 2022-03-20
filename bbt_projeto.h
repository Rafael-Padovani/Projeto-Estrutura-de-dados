
void imprime_tab(char tab[8][8]){
    printf("|---|---|---|---|---|---|---|---|\n"); 
    for(int i = 0; i < 8; i++){      
        printf("|");
        for(int j = 0; j < 8; j++){
            printf(" %c |", tab[i][j]);
        }
        printf("\n");
        printf("|---|---|---|---|---|---|---|---|\n");
    }
    printf("\n\n");
}

void imprime_player(char plr[3][3]){
    printf("Sentido do Player:\n"); 
    for(int i = 0; i < 3; i++){      
        printf("|");
        for(int j = 0; j < 3; j++){
            printf(" %c ", plr[i][j]);
        }
        printf("|"); 
        printf("\n");
    }
}

void imprime_comando(int fase){
    printf("\nLista de comandos:\n");
    switch (fase){
            case 1:
                printf("1) |F| |F| \n");
                printf("2) |F| |E| |F|\n");
                printf("3) |D| |F| |F|\n");
                break;
            case 2:
                printf("1) |F| |F| \n");
                printf("2) |F| |E| |F|\n");
                printf("3) |D| |F| |F|\n");
                break;
            case 3:
                printf("1) |F| |F| \n");
                printf("2) |F| |E| |F|\n");
                printf("3) |D| |F| |F|\n");
                break;
        
            default:
                break;
        }
}


void F(char tab[8][8], char plr[3][3]){
    int c, l;
    
    for(int i = 0; i < 8; i++){      
        for(int j = 0; j < 8; j++){
            if(tab[i][j] == 'P'){
                l = i;
                c = j;
                tab[i][j] = ' '; 
            }
        }
    }
    
    if(plr[1][2] != ' '){ //Movimenta a Direita
        if((c+1 < 8)&&(tab[l][c+1]!='X'))
            tab[l][c+1] = 'P';
        else
            printf("Impossivel mover nesta direção!\n\n");
    }else if(plr[0][1] != ' '){ //Movimenta para Cima
        if((l-1 > 0)&&(tab[l-1][c]!='X'))
            tab[l-1][c] = 'P';
        else
            printf("Impossivel mover nesta direção!\n\n");
    }else if(plr[1][0] != ' '){ //Movimenta a Esquerda
        if((c-1 > 0)&&(tab[l][c-1]!='X'))
            tab[l][c-1] = 'P';
        else
            printf("Impossivel mover nesta direção!\n\n");
    }else if(plr[2][1] != ' '){ //Movimenta para Baixo
        if((l+1 < 8)&&(tab[l+1][c]!='X'))
            tab[l+1][c]= 'P';
        else
            printf("Impossivel mover nesta direção!\n\n");    
    }
}

void E(char plr[3][3]){
    if(plr[1][2] != ' '){ 
        plr[1][2] = ' ';
        plr[0][1] = '^';
    }else if(plr[0][1] != ' '){ 
        plr[0][1] = ' ';
        plr[1][0] = '<';
    }else if(plr[1][0] != ' '){ 
        plr[1][0] = ' ';
        plr[2][1] = 'v';
    }else if(plr[2][1] != ' '){ 
        plr[2][1] = ' ';
        plr[1][2] = '>';
    }
}

void D(char plr[3][3]){
    if(plr[1][2] != ' '){ 
        plr[1][2] = ' ';
        plr[2][1] = 'v';
    }else if(plr[2][1] != ' '){ 
        plr[2][1] = ' ';
        plr[1][0] = '<';
    }else if(plr[1][0] != ' '){ 
        plr[1][0] = ' ';
        plr[0][1] = '^';
    }else if(plr[0][1] != ' '){ 
        plr[0][1] = ' ';
        plr[1][2] = '>';
    }
}






