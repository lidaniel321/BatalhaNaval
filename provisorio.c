#include <stdio.h>//Jogo BATALHA NAVAL 
#include <stdlib.h>//Developed by GRUPO 10 ;)
#include <string.h>
#include <time.h>

#define VER  "\033[0;31m" // Cor vermelha
#define CIA  "\033[1;36m" // Cor Ciano
#define RESET "\033[0m"   // Reseta cor
#define TEMPO 100000



void geratab(char tab[][10]){
	 int i,j;
	 for(i= 0; i < 10; i++)
		for(j =0; j<10; j++){
					tab[i][j]= '~';
				} 			
}

void titulo(void)
{
    printf(CIA"                            ██████╗  █████╗ ████████╗ █████╗ ██╗     ██╗  ██╗ █████╗     ███╗   ██╗ █████╗ ██╗   ██╗ █████╗ ██╗ \n");    
    usleep(TEMPO);
    printf("                            ██╔══██╗██╔══██╗╚══██╔══╝██╔══██╗██║     ██║  ██║██╔══██╗    ████╗  ██║██╔══██╗██║   ██║██╔══██╗██║     \n");
    usleep(TEMPO);
    printf("                            ██████╔╝███████║   ██║   ███████║██║     ███████║███████║    ██╔██╗ ██║███████║██║   ██║███████║██║     \n");
    usleep(TEMPO);
    printf("                            ██╔══██╗██╔══██║   ██║   ██╔══██║██║     ██╔══██║██╔══██║    ██║╚██╗██║██╔══██║╚██╗ ██╔╝██╔══██║██║     \n");
    usleep(TEMPO);
    printf("                            ██████╔╝██║  ██║   ██║   ██║  ██║███████╗██║  ██║██║  ██║    ██║ ╚████║██║  ██║ ╚████╔╝ ██║  ██║███████╗ \n");
    usleep(TEMPO);
    printf("                            ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝    ╚═╝  ╚═══╝╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝╚══════╝\n"RESET);
    
}

void mostratabPC(char tab[][10]){
		int i, j;
		for(i= 0; i < 10; i++){
			for(j =0; j<10; j++){
				if(j == 0){
					if(i<=9){
						printf(" ");
					}
					printf("%c ", i + 65);
				}
				if(tab[i][j]=='*'){
					printf(VER"■ "RESET);
                }
                else if (tab[i][j]=='x'){
                    printf(CIA"■ "RESET);
                }
				else{
					printf("■ ");
				}
			}
			printf("\n");
		}
}
void mostratabJ(char tab[][10]){
		int i,j;
		for(i= 0; i < 10; i++)
			for(j =0; j<10; j++){
				if(j == 0){
					if(i<=9){
						printf(" ");
					}
					printf("%c ", i + 65);
				}
				if(tab[i][j]=='*'){
					printf(VER"■ "RESET);
                }
                else if (tab[i][j]=='x'){
                    printf(CIA"■ "RESET);
                }
                else if (tab[i][j] == 'H' || tab[i][j] == 'C' || tab[i][j] == 'E' || tab[i][j] == 'S' || tab[i][j] == 'P')
                {
                    printf("%c ",tab[i][j]);
                }
                
				else{
					printf("■ ");
				}


				if(j == 9){
					printf("\n");
				}
		}
}
void naviosPC(char tab[][10])
{		
		int sj1,sj2,cj1,cj2,cj3,hj1,hj2,hj3,ej1,ej2,ej3,pj1,pj2,pj3,i,j,n;

		//int n, i, j;
       	n= rand()%3;
		if(n == 0){//1� Op��o dos navis do PC
			tab[0][1]= 'S'; //submarino
			
			for(j=2; j<=3;j++){//cruzador
				tab[2][j]= 'C'; 
			}
		
			tab[5][6]='H'; //hidroavi�o
			tab[6][5]='H'; //hidoavi�o
			tab[6][7]='H'; //hidroavi�o
			
			for(j=6;j<=9;j++){//encoura�ado
				tab[9][j]='E'; 
			}
			for(j=1;j<=5;j++){// porta-avioes
				tab[7][j]='P'; 
			}
		}
		if(n == 1){//2� Op��o dos navis do PC
			tab[1][7]= 'S'; //submarino
			
			for(i=3; i<=4;i++){//cruzador
				tab[i][9]= 'C'; 
			}
		
			tab[8][2]='H'; //hidroavi�o
			tab[9][1]='H'; //hidoavi�o
			tab[9][3]='H'; //hidroavi�o
			
			for(i=4;i<=7;i++){//encoura�ado
				tab[i][0]='E'; 
			}
			for(j=4;j<=8;j++){// porta-avioes
				tab[2][j]='P'; 
			}
		}
		if(n == 2){//3� Op��o dos navis do PC
			tab[8][0]= 'S'; //submarino
			
			for(j=8; j<=9;j++){//cruzador
				tab[9][j]= 'C'; 
			}
		
			tab[0][1]='H'; //hidroavi�o
			tab[1][0]='H'; //hidoavi�o
			tab[1][2]='H'; //hidroavi�o
			
			for(i=4;i<=7;i++){//encoura�ado
				tab[i][9]='E'; 
			}
			for(j=2;j<=6;j++){// porta-avioes
				tab[2][j]='P'; 
			}
		}
}
void naviosJ(char tab[][10]){
		 int sj1,sj2,cj1,cj2,cj3,hj1,hj2,hj3,ej1,ej2,ej3,pj1,pj2,pj3,i,j,temp,temp2;
		

		
		pj1 = rand()%9;
	    pj2 = rand()%5;
	    	tab[pj1][pj2]='P';//Porta-Avioes
		    tab[pj1][pj2+1]='P';//Porta-Avioes
		    tab[pj1][pj2+2]='P';//Porta-Avioes
		    tab[pj1][pj2+3]='P';//Porta-Avioes
		    tab[pj1][pj2+4]='P';//Porta-Avioes
		    
		LOOP:
	    ej1 = rand()%9;
	    ej2 = rand()%6;
		printf("encouracado nao encaixado\n");
		temp = ej1;
		temp2 = ej1;
		for (temp2; temp2 < temp + 4; temp2 ++)
		{
			if (tab[temp2][ej2] != '~')
			{
				goto LOOP;
			}
			
		}
		
		    tab[ej1][ej2]='E';//Encouracado
		    tab[ej1+1][ej2]='E';//Encouracado
		    tab[ej1+2][ej2]='E';//Encouracado
		    tab[ej1+3][ej2]='E';//
			
	
	    
		LOOP2:
	    hj1 = rand()%7;
    	hj2 = rand()%9;
		printf("destroyer nao encaixado\n");
		//printf("%d\t%d\n",hj1,hj2);
		//usleep(TEMPO);
		temp = hj1;
		temp2 = hj1;
		for (temp2; temp2 < temp + 3; temp2 ++)
		{
			if (tab[temp2][hj2] != '~')
			{
				goto LOOP2;
			}
		}
	        tab[hj1][hj2]='H';//Destroyer
	        tab[hj1+1][hj2]='H';//Destroyer
	        tab[hj1+2][hj2]='H';//Destroyer
	        
	   	LOOP3: 
	    cj1 = rand()%9;
	    cj2 = rand()%8;
		printf("cruzador nao encaixado\n");
		temp = cj2;
		temp2 = cj2;
		for (temp2; temp2 < temp + 2; temp2 ++)
		{
			if (tab[cj1][temp2] != '~')
			{
				goto LOOP3;
			}
		} 
		    tab[cj1][cj2]='C';//cruzador
	        tab[cj1][cj2+1]='C';//cruzador
	      
		LOOP4:
	    sj1 = rand()%9;
	    sj2 = rand()%9;
		printf("submarino nao encaixado\n");
			if (tab[sj1][sj2] != '~')
			{
				goto LOOP4;
			}
			
	        tab[sj1][sj2]='S';//submarino


			mostratabJ(tab);
			usleep(1000000000000);
	

}
void tiro(char tab[][10], int i, int j, int c[]){
		if(tab[i][j]=='S'){
				tab[i][j]= '*';
				c[0]++;
			}
		else if(tab[i][j]=='C'){
			tab[i][j]= '*';
			c[1]++;			
		}
		else if(tab[i][j]=='H'){
			tab[i][j]= '*';
			c[2]++;			
		}
		else if(tab[i][j]=='E'){
			tab[i][j]= '*';
			c[3]++;			
		}
		else if(tab[i][j]=='P'){
			tab[i][j]= '*';
			c[4]++;	
		}
		else if(tab[i][j]=='~'){
			tab[i][j]='x';
		}
		else{
			printf("\n tiro j� foi dado\n");
		}
}
int verificador(char tabs[][10], int i, int j){
	if (tabs[i][j] == '*'){
		return 1;
	}
	else{
		return 0;
	}
}


int main(void)
{
	srand((unsigned int)time(NULL)); //Random seed
	int qmjoga, count=0, pntC=0, pntJ=0, numtirosC=0,numtirosJ=0, verificatiro, i, j, fim=0;
	int cC[5], cJ[5]; //s�o os contadores de cada navio, pois cada parte atingida soma um  e atingindo determinada quantia significa q o navio foi detruido
	char tabC[10][10],tabJ[10][10], op, temp, inputUsuario[64]; //op ve se o usuario vai jogar ou fechar
    size_t length = 0;
    int num = 0, index = 0, flag = 0, check = 0;


	geratab(tabC); //Gera  o Tab. do PC
	geratab(tabJ);//Gera  o Tab. do Jogador
	for(i=0; i<5;i++){
		cC[i]=0;
		cJ[i]=0;
	}
	do{	
		naviosPC(tabC); //gera a posi��o dos navios do PC
		naviosJ(tabJ); //gera a posi��o dos navios do Jogador 
		titulo(); //apresenta��o e regras do Jogo
		printf("\n O jogo apenas terminara quando voce ou seu inimigo destruirem todos os Navios, quem destruir todos os navios primeiro sera o VENCEDOR dessa Batalha");
		printf("\n \n Regras: Os jogadores terao direito ao um tiro de cada vez, mas quem acertar o navio inimigo podera continuar atirando ate errar\n");
		printf("  O tamanho dos navios:\n  Submarino: 1 \n  Cruzador: 2 \n  Hidro-Aviao: 3 \n  Encouracado: 4\n  Porta-Avioes: 5 \n \n");
		
		qmjoga = rand() % 2; //faz um sorteio de quem inicia o jogo - 0 � PC | 1 � Jogador
		do{//jogo
			
			do{ //vai repetir enquanto estiver acertando o tiro
				printf("\n O JOGO MARCARA"VER "'■'"RESET" QUANDO O SEU TIRO ACERTAR UM NAVIO DO INIMIGO, OU O INIMIGO ACERTAR SEU NAVIO E SERA COLOCADO "CIA"'■'"RESET" QUANDO FOR TIRO NA AGUA \n");	
				printf("\n Tabuleiro do inimigo:                     \n \n");
				printf("   0 1 2 3 4 5 6 7 8 9 \n");
				mostratabPC(tabC);	//mostra o tabuleiro do PC(nao mostra os navios)
	
				printf("\n  - - - - - - - - - -  \n \n");
		
				printf(" Seu Tabuleiro:                \n \n");
				printf("   0 1 2 3 4 5 6 7 8 9  \n");
				mostratabJ(tabJ); //mostra o tabuleiro do Jogador com os navios
				
				if(qmjoga ==0){ // Computador atira
					printf("\n Seu Inimigo esta jogando... \n");
					i = rand() % 10;
					j = rand() % 10;			
					tiro(tabJ, i, j, cJ);
					numtirosC  ++;
					verificatiro = verificador(tabJ, i, j);
					if(verificatiro == 1){
						printf("\nInimigo acertou!");
					}else{
						printf("\nTiro errado!");
					}
					
					if(cJ[0] == 1){
						printf("\nInimigo derrubou seu Submarino!\n");
						cJ[0]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntC +=5;
					}
					if(cJ[1] == 2){
						printf("\nInimigo derrubou seu Cruzador!\n");
						cJ[1]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntC +=10;
					}
					if(cJ[2] == 3){
						printf("\nInimigo derrubou seu Hidro-Aviao!\n");
						cJ[2]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntC +=15;
					}
					if(cJ[3]== 4){
						printf("\nInimigo derrubou seu Encouracado!\n");
						cJ[3]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntC +=20;
					}
					if(cJ[4] == 5){
						printf("\nInimigo derrubou seu Porta-avioes!\n");
						cJ[4]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntC +=25;
					}
				}
				else{// Jogador atira
                        
					    printf("\n Sua vez, escolha uma linha e coluna\n");
					    
                        while (check == 0)
                        {
                            length = 0;
                            flag = 0;
                            check = 0;

                            printf("\n linha: ");
                            fgets(inputUsuario,63,stdin);
                            length = strlen(inputUsuario);

                            if( length < 1 || length > 2) {
			                    printf("Tamanho invalido\n");
			                    continue;
                            }
                            length --;


		                    if( (inputUsuario[0] == 'a') || (inputUsuario[0] == 'A') || (inputUsuario[0] == 'b') || (inputUsuario[0] == 'B') 
                            || (inputUsuario[0] == 'c') || (inputUsuario[0] == 'C') || (inputUsuario[0] == 'd') || (inputUsuario[0] == 'D')
                            || (inputUsuario[0] == 'e') || (inputUsuario[0] == 'E') || (inputUsuario[0] == 'f') || (inputUsuario[0] == 'F')
                            || (inputUsuario[0] == 'g') || (inputUsuario[0] == 'G') || (inputUsuario[0] == 'h') || (inputUsuario[0] == 'H')
                            || (inputUsuario[0] == 'i') || (inputUsuario[0] == 'I') || (inputUsuario[0] == 'j') || (inputUsuario[0] == 'J')) {
		                    	check ++;
		                    	continue;
		                    }

		                    printf("Caracter invalido\n");
                        }
                        temp = inputUsuario[0];
                        check = 0;

                        
                        if (temp == 'a' || temp == 'A')
                            i = 0;
                        else if (temp == 'b' || temp == 'B')
                            i = 1;
                        else if (temp == 'c' || temp == 'C')
                            i = 2;
                        else if (temp == 'd' || temp == 'D')
                            i = 3;
                        else if (temp == 'e' || temp == 'E')
                            i = 4;
                        else if (temp == 'f' || temp == 'F')
                            i = 5;
                        else if (temp == 'g' || temp == 'G')
                            i = 6;
                        else if (temp == 'h' || temp == 'H')
                            i = 7;
                        else if (temp == 'i' || temp == 'I')
                            i = 8;
                        else if (temp == 'j' || temp == 'J')
                            i = 9;
                        else
                            i = 100;
                        
                        //verificaLinha(*i);
        
					    //printf("\n coluna: ");
					    //scanf("%d", &j);
                        while (num == 0)
                        {
                            length = 0;
                            flag = 0;
                            num = 0;

                            printf("\n coluna: ");
                            fgets(inputUsuario,63,stdin);
                            length = strlen(inputUsuario);

                            if( length < 1 || length > 2) {
			                    printf("Tamanho invalido\n");
			                    continue;
                            }
                            length --;

                            for(index = 0; index < length; ++index) 
                            {
		                	    if(inputUsuario[index] < '0' || inputUsuario[index] > '9') {
		                		flag = 1;
		                		break;
		                	}
		                    }

		                    if( flag) {
		                    	printf("Invalid character\n");
		                    	continue;			
		                    }

		                    if( sscanf(inputUsuario, "%d", &num) != 1) {
		                    	printf("Invalid sscanf()\n");
		                    	continue;
		                    }

                        }
                        
                        j = num;
                        num = 0;
                    
                        
					    
				    

					tiro(tabC, i, j, cC);
					verificatiro = verificador(tabC, i, j);
					numtirosJ  ++;
					
					if(verificatiro == 1){
						printf("\nVoce acertou!\n");
					}else{
						printf("\nTiro errado!\n");
					}
					
					if(cC[0] == 1){
						printf("\nVoce derrubou o Submarino do inimigo!\n");
						cC[0]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntJ +=5;
					}
					if(cC[1] == 2){
						printf("\nVoce derrubou o cruzador do inimigo!\n");
						cC[1]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntJ +=10;
					}
					if(cC[2] == 3){
						printf("\nVoce derrubou o Hidro-aviao do inimigo!\n");
						cC[2]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntJ +=15;
					}
					if(cC[3] == 4){
						printf("\nVoce derrubou o Encoura�ado do inimigo!\n");
						cC[3]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntJ +=20;
					}
					if(cC[4] == 5){
						printf("\nVoce derrubou o Porta-avioes do inimigo!\n");
						cC[4]++; // para nao repetir mais essa mensagem quando entrar no la�o novamente
						pntJ +=25;
					}
				}
                //printf("\033[H\033[J");   // limpa terminal
				printf("\n Porfavor, aperte alguma tecla para continuar");
				getchar();
                printf("\033[H\033[J");   // limpa terminal
				if((pntC==75 )|| (pntJ ==75)){
					verificatiro =0;
				}
			}while(verificatiro == 1);
			
			if(qmjoga == 0){ //se o PC jogou muda para o Jogador a vez
				qmjoga = 1;
			}
			else{//se o Jogador jogou muda para o PC a vez
				qmjoga = 0;
			}
			if((pntC == 75) || (pntJ==75)){
				fim=1;
			}
		}while(fim == 0); // o Jogo nao acaba enquanto o PC ou Jogador atingirem os pontos, que seria derrubar todos os navios
		
		if(pntJ > pntC){
			printf("\n\n      V O C E   V E N C E U !!!");
			//printf("\n  Sua pontuacao: %d", pntJ);
			printf("\n Seu Numero de tiros: %d\n\n", numtirosJ);
			//printf("\n  Pontuacao do inimigo: %d", pntC);
			printf("\n Numero de tiros do inimigo: %d\n", numtirosC);
		}
		if(pntC > pntJ){
			printf("\n\n     O   I N I M I G O   V E N C E U !");
			//printf("\n  Pontuacao do inimigo: %d", pntC);
			printf("\n Numero de tiros do inimigo: %d\n", numtirosC);
			//printf("\n\n  Sua pontuacao: %d", pntJ);
			printf("\n Seu Numero de tiros: %d", numtirosJ);
		}
		
		printf("\n\n\n  Deseja Jogar novamente?(s / n) \n");
		scanf("%c", op);
	}while(op != 'n');


	return 0;
} 
// ;)
