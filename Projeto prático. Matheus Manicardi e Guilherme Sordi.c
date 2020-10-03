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
	 printf ("Menu de opçoes :\n  ");
	printf("\n1-conversão decimal para binário\n ");
	printf("\n2- Conversão binário para decimal\n");
	printf("\n3- Sair\n\n");
	printf("Escolha sua opção:\n\n");
	scanf ("%d", &opcao); 
	
	if(opcao == 1)
	{
		printf("\nA opçao 1 foi escolhida\n");
		
	}	
	else if(opcao == 2)
	{
		printf("A opção 2 foi escolhida\n");
		
	}
	else if (opcao == 3)
	{
		printf("A opção 3 foi escolhida");
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
		    printf("O resultado é :\n");
			printf("\n\t"); 
			 	
			 for(aux=1; aux < TAM; aux++)
       {
          printf("%d", binario[aux]);
		  if((aux%4)==0) 
			printf(" ");                     
		}
		
		  break;
        case 2:
	  	printf("\nDigite um numero binário\n ");
		  scanf("%d", &num);
		  while (num>0)
			{
         
		     dgt=num%10;
		     if(dgt==1)
			    rtd=rtd+vtr[psc];
		         psc++;
		          num=num/10;
			
      	   }	
	         printf("O resultado é %i : \n ",rtd);
	         system("pause");
		  
		  break; 
	  
	  
		  
	}
		
 	
	
    return 0;
   } 