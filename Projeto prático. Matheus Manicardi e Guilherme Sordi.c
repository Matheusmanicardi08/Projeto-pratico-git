#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 13 

int main(){

	
	setlocale(LC_ALL, "");
	int opcao;
	int numerodecimal, binario[TAM], aux;
	int dgt, num, psc = 0, rtd = 0;
	int vtr[]={1,2,4,8,16,32,64,128,256};
	
  do{
	 printf ("Menu de op�oes :\n  ");
	printf("\n1-convers�o decimal para bin�rio\n ");
	printf("\n2- Convers�o bin�rio para decimal\n");
	printf("\n3- Sair\n\n");
	printf("Escolha sua op��o:\n\n");
	scanf ("%d", &opcao); 
	
	if(opcao == 1)
	{
		printf("\nA op�ao 1 foi escolhida\n");
		
	}	
	else if(opcao == 2)
	{
		printf("A op��o 2 foi escolhida\n");
		
	}
	else if (opcao == 3)
	{
		printf("A op��o 3 foi escolhida");
	}		
	  
  }	while  (3!=3);
  
	switch(opcao){
		case 1:
	  	printf("\nDigite um numero decimal\n");
		  scanf("%d", &numerodecimal);	
		  for(aux = TAM -1; aux >= 0; aux--)
		 {
		 	binario[aux] =(numerodecimal%2)== 0 ? 0 : 1;
		     numerodecimal = numerodecimal/ 2;
		 }
		    printf("O resultado � :\n");
			printf("\n\t"); 
			 	
			 for(aux=1; aux < TAM; aux++)
       {
          printf("%d", binario[aux]);
		  if((aux%4)==0) 
			printf(" ");                     
		}
		
		  break;
        case 2:
	  	printf("\nDigite um numero bin�rio\n ");
		  scanf("%d", &num);
		  while (num>0)
			{
         
		     dgt=num%10;
		     if(dgt==1)
			    rtd=rtd+vtr[psc];
		         psc++;
		          num=num/10;
			
      	   }	
	         printf("O resultado � %i : \n ",rtd);
	         system("pause");
		  
		  break; 
	  
	  
		  
	}
		
 	
	
    return 0;
   } 