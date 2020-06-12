#include <stdio.h>


int mp[3][3], x = 0, y = 0, velha = 0, vez;

void show()
{
 	textbackground(BLACK);
 	system("cls");  
 	vez ? textbackground(GREEN):textbackground(RED);  //verde p/ bolinha  vermelho p/ X	    
 	for(int i = 0; i < 2; i++)
	{	
		for(int j = 0; j < 27; j++)
		{
		 	if(j < 17) printxy(i * 9 + 33, j + 3, "  ");//Barras verticais   ||	  
	 		printxy(j + 25 , i * 6 + 8, " ");	          //Barras horizontais ----			 	 		                                 
			for(int k = 0; k < 3; k++)
   		{
	      	for(int l = 0; l < 3; l++)
		      {						
					if(j < 3)
					{
					 	  if(y == k && x == l)            // verifica a posição das miras
					 	  {						  	
						  		textbackground(BLUE);
						  		printxy(    j + l * 10 + 27, i * 4 + k * 6 + 3, " ");// Pintando
	   						printxy(i * 6 + l * 10 + 25, j + k * 6 + 4, " ");   // miras de seleção
						  }
						  vez ? textbackground(GREEN):textbackground(RED);			      
						  if(mp[l][k] == 1)
						  {
					 	  		printxy(    j + l * 10 + 27, i * 2 + k * 6 + 4, " ");//Pintando
	   						printxy(i * 2 + l * 10 + 27, j + k * 6 + 4, " ");   //bolinhas
						  }		  		 
			  		}
					if(mp[l][k] == 2 && j < 3)
					{
					 	printxy(    j + l * 10 + 27, j + k * 6 + 4, " ");   //Pintando
	   				printxy(2 - j + l * 10 + 27, j + k * 6 + 4, " ");  // Xis
					}					
		      }
		   }  
		}
	}	 	  
}

int main()
{
 	 show();
     while(!GetAsyncKeyState(VK_ESCAPE))                     //esc sai
	{          //Movimenta a mira
		if(GetAsyncKeyState(VK_LEFT) && x > 0) { x--; show(); }// esquerda 
		if(GetAsyncKeyState(VK_RIGHT)&& x < 2) { x++; show(); }//direita
		if(GetAsyncKeyState(VK_DOWN) && y < 2) { y++; show(); }//baixo
		if(GetAsyncKeyState(VK_UP)   && y > 0) { y--; show(); }//cima
			 	  //Troca as peças
		if(GetAsyncKeyState(VK_SPACE) && !mp[x][y])     // espaço escolhe
		{
		 	vez ? mp[x][y] = 1 : mp[x][y] = 2;
			if(vez = !vez) printf("%c",7); 											 					
			show();
			velha++;
			gotoxy(10,10);											
			printf("%c",7); // bip	                 Confere a vitoria
			if((mp[0][0] == 1 + vez && mp[0][1] == 1 + vez && mp[0][2] == 1 + vez) ||  //          |          |
			   (mp[0][0] == 1 + vez && mp[1][0] == 1 + vez && mp[2][0] == 1 + vez) ||  // mp[0][0] | mp[0][1] | mp[0][2]
			   (mp[0][0] == 1 + vez && mp[1][1] == 1 + vez && mp[2][2] == 1 + vez) ||  // ---------|----------|---------  
				(mp[0][2] == 1 + vez && mp[1][1] == 1 + vez && mp[2][0] == 1 + vez) ||  // mp[1][0] | mp[1][1] | mp[1][2]
			   (mp[1][0] == 1 + vez && mp[1][1] == 1 + vez && mp[1][2] == 1 + vez) ||  //----------|----------|---------
				(mp[2][0] == 1 + vez && mp[2][1] == 1 + vez && mp[2][2] == 1 + vez) ||  // mp[2][0] | mp[2][1] | mp[2][2]
				(mp[0][1] == 1 + vez && mp[1][1] == 1 + vez && mp[2][1] == 1 + vez) ||  //          |          | 
				(mp[0][2] == 1 + vez && mp[1][2] == 1 + vez && mp[2][2] == 1 + vez)) {                                                                                  
		 	    Sleep(700);                                                                    
	       	 system("color 32");                                                                         
				 vez ? printf(" O   Xis    V E N C E U ... ") : printf(" A Bolinha  V E N C E U ... ");
			    Sleep(1000);                                                                           
				 vez ? system("color 2e") : system("color 4e");                                     
				 Sleep(5000);                                                        
				 exit(0); 	  
			 }else if(velha == 9)
			{			 	  
			 	 system("color 62");
				 printf(" Empate deu  V E L H A ... ");
			 	 Sleep(500); system("color f5");
				 Sleep(5000);
				 exit(0);		 		
			} 				   			 	
		}	 	
		Sleep(100);
	}
}
