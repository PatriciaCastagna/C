    #include<stdio.h>
        int main()
		{
            int op;
            do{
                printf("\n1-P1\n2-P2\n3-P3\n4-P4\n0-SAIR\nInsira a sua escolha: ");
                scanf("%d",&op);
                if(op==1){
				
				
                    printf("\nBEM-VINDO AO PROGRAMA 1.");
					printf("\nInsira valor inteiro para resistencia eletrica:");
					int r;
					scanf("%d",&r);
					
					printf("\nInsira valor decimal para corrente eletrica:");
					float i;
					scanf("%f",&i);
					
					int U = r*i;
					printf("\nIdade: %d", U); 				
					
					
					
                }else if(op==2){
                    printf("\nBEM-VINDO AO PROGRAMA 2.");
					
					printf("\nInsira o primeiro numero");
					int n1;
					scanf("%d",&n1);
					
					printf("\nInsira o segundo numero");
					int n2;
					scanf("%d",&n2);
					
						if(n1>n2){
						
						    printf("\nOs numeros inseridos foram %d e %d:", n1, n2);
							
						}else if(n2>n1){
						 
							printf("\nOs numeros inseridos foram %d e %d:",n2, n1);
							
						}else if(n1==n2){
						 
							printf("\nNumeros identicos %d", n1);
							
					}   	
							 	    
					
					
					
					
					
                }else if(op==3){
	                    printf("\nBEM-VINDO AO PROGRAMA 3.");
						
						printf("\nIforme o valor do raio:");
						float r;
						scanf("%f",&r);	 
						
						float d = r*r;
						float a = 3.14*d;
						
						printf("\nO valor da area do curculo %.2f/n:", a);
						
						
					
					  	  	  	  	  
					
											
					
					
                }else if(op==4){
				
   
		               int numNoites;
		               do{
		                   printf("\nInsira o numero de noites: ");
		                   scanf("%d",&numNoites);
		                   if(numNoites<=0){
		                       printf("\nErro - insira um valor positivo.");
		                   }
		               }while(numNoites<=0);
		   
		   
		               int i;
		               float totalPagar=0;
		               for(i=1;i<=numNoites;i++){
		                   totalPagar += 50.0 / i;
		               }
		   
		   
		               printf("\nValor a cobrar ao cliente: %.2f EUR", totalPagar);
		               printf("\n---------------------------");
		               for(i=1;i<=numNoites;i++){
		                   float t = 50.0 / i;
		                   printf("\nValor da %dª noite: %.2f EUR", i,t);
		               }  
					
					
					
               
                }else if(op==0){
                    printf("\nSAIR.");
                }else{
                    printf("\nErro.");
                }
            }while(op!=0);
            return(0);
        }

