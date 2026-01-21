#include<stdio.h>
int main()
{
	// 
	int const size=3;
	int board[size][size];
	int result=0;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			board[i][j]=0;
		}
	}
	int turn=1;
	//
    while(turn<=9){
		if(turn%2==1){
			printf("p1Âä×Ó"); 
			scanf("%d %d",&i,&j);
				if(board[i-1][j-1]==0){
					board[i-1][j-1]=1;
				}	
		}else{
			printf("p2Âä×Ó");
			scanf("%d %d",&i,&j);
				if(board[i-1][j-1]==0){
					board[i-1][j-1]=-1;
				}
		}
		
	
		//
		for(i=0;i<3;i++){
			if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]){
				result=board[i][0];
			}
		}
		//
		for(j=0;j<3;j++){
			if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]){
				result=board[0][j];
			}
		}
		//
		if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]){
			result=board[1][1];
		}else if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]){
			result=board[1][1];
		}
		//
		switch(result){
			case 1:
				printf("p1Ê¤"); 
				break;
			case -1:
				printf("p2Ê¤");
				break;
			case 0:
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%d   ",board[i][j]);
						if(j==2){
							printf("\n");
						}
					}
				}
				turn++;						
		}
		//
		
	
	}
	return 0;
}
    
	
	
	 
