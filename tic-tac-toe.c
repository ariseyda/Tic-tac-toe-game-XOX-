#include<stdio.h>
#include <conio.h>

//Tic-tac-toe game(XOX)

char array[9]={'1','2','3','4','5','6','7','8','9'};

void xox();
int checkwin();

int checkwin(){
	
    //FUNCTION TO RETURN GAME STATUS
    //1 FOR GAME IS OVER WITH RESULT
    //-1 FOR GAME IS IN PROGRESS
    //O GAME IS OVER AND NO RESULT
	
	if(array[0]==array[1] && array[1]==array[2]){
		return 1;
	}
	else if(array[3]==array[4] && array[4]==array[5]){
		return 1;
	}
	else if(array[6]==array[7] && array[7]==array[8]){
		return 1;
	}
	else if(array[0]==array[3] && array[3]==array[6]){
		return 1;
	}
	else if(array[1]==array[4] && array[4]==array[7]){
		return 1;
	}
	else if(array[2]==array[5] && array[5]==array[8]){
		return 1;
	}
	else if(array[0]==array[4] && array[4]==array[8]){
		return 1;
	}
	else if(array[2]==array[4] && array[4]==array[6]){
		return 1;
	}
	else if(array[0]!='1'&&array[1]!='2'&&array[2]!='3'&&array[3]!='4'&&array[4]!='5'&&array[5]!='6'&&array[6]!='7'&&array[7]!='8'&&array[8]!='9'){
	//Everywhere is filled with X and O, but 3 X or 3 0 never came together.
		return 0;
	}
	else{
		return -1;
	}
	
}

void xox(){
	
	printf("\n\n\tTic Tac Toe\n\n");
	printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
	
	int a=0;
	int i,j;
	
		while(a<7){
			printf("%c    |    %c    |    %c\n",array[a],array[a+1],array[a+2]);
			printf("     |         |       \n");
			if(a<6){
				printf("------------------------\n");
			}
			a+=3;
		}
}
int main(){
	
	char n;	
	int m,i;
	int player=1;
    xox(array,9);
	
	
    do{
    
	
	player = (player % 2) ? 1 : 2;

	n=(player==1) ? 'X':'O';
	
	
	  printf("Player %d:Which number do you want to put in?:",player);
			scanf("%d",&m);
			if(m==1){
				array[0]=n;
				xox();
			}
			else if(m==2){
				array[1]=n;
				xox();
			}
			else if(m==3){
				array[2]=n;
				xox();
			}
			else if(m==4){
				array[3]=n;
				xox();
			}
			else if(m==5){
				array[4]=n;
				xox();
			}
			else if(m==6){
				array[5]=n;
				xox();
			}
			else if(m==7){
				array[6]=n;
			}
			else if(m==8){
				array[7]=n;
				xox();
			}
			else if(m==9){
				array[8]=n;
				xox();
			}
			else{
				printf("Invalid move");
				player--;
				getch();
			}
			
			i=checkwin();	
            player++;
    		
	}while(i==-1);
			
	xox();
		
    if(i==1){
    	printf("Player %d win.",--player);
	}
	else{
		printf("GAME OVER\nNOBODY WINS^^");
	}
		
	return 0;
 }
