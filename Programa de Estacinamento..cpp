//biblioteca.
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

//Variáveis.
char modelo_do_carro[20];
char placa_do_carro[9];
char cor_do_carro[20];
char dadoscarro[20];
int vaga;
char resultado;
float primeira_hora  ;
float segunda_hora  ;
char data_entrada[11];
char hora_entrada[10];
char data_saida[9];
char hora_saida[10];
float valor;
float valor2;
float valor3;

//Variáveis 02.
char modelo_do_carro2[20];
char placa_do_carro2[9];
char cor_do_carro2[20];
char dadoscarro2[20];
int vaga2;
char data_entrada2[11];
char hora_entrada2[10];
char data_saida2[9];
char hora_saida2[10];
char resultado2;
float primeira_hora2;
float segunda_hora2;

//Variáveis 03.
char modelo_do_carro3[20];
char placa_do_carro3[9];
char cor_do_carro3[20];
char dadoscarro3[20];
int vaga3;
char data_entrada3[11];
char hora_entrada3[10];
char data_saida3[9];
char hora_saida3[10];
char resultado3;
float primeira_hora3;
float segunda_hora3;

//Variáveis 04.
char modelo_do_carro4[20];
char placa_do_carro4[9];
char cor_do_carro4[20];
char dadoscarro4[20];
int vaga4;
char data_entrada4[11];
char hora_entrada4[10];
char data_saida4[9];
char hora_saida4[10];
char resultado4;
float primeira_hora4;
float segunda_hora4;

//Variáveis 05.
char modelo_do_carro5[20];
char placa_do_carro5[9];
char cor_do_carro5[20];
char dadoscarro5[20];
int vaga5;
char data_entrada5[11];
char hora_entrada5[10];
char data_saida5[9];
char hora_saida5[10];
char resultado5;
float primeira_hora5;
float segunda_hora5;

//Variáveis 06.
char modelo_do_carro6[20];
char placa_do_carro6[9];
char cor_do_carro6[20];
char dadoscarro6[20];
int vaga6;
char data_entrada6[11];
char hora_entrada6[10];
char data_saida6[9];
char hora_saida6[10];
char resultado6;
float primeira_hora6;
float segunda_hora6;

//Variáveis 07.
char modelo_do_carro7[20];
char placa_do_carro7[9];
char cor_do_carro7[20];
char dadoscarro7[20];
int vaga7;
char data_entrada7[11];
char hora_entrada7[10];
char data_saida7[9];
char hora_saida7[10];
char resultado7;
float primeira_hora7;
float segunda_hora7;

//Variáveis 08.
char modelo_do_carro8[20];
char placa_do_carro8[9];
char cor_do_carro8[20];
char dadoscarro8[20];
int vaga8;
char data_entrada8[11];
char hora_entrada8[10];
char data_saida8[9];
char hora_saida8[10];
char resultado8;
float primeira_hora8;
float segunda_hora8;

//Variáveis 09.
char modelo_do_carro9[20];
char placa_do_carro9[9];
char cor_do_carro9[20];
char dadoscarro9[20];
int vaga9;
char data_entrada9[11];
char hora_entrada9[10];
char data_saida9[9];
char hora_saida9[10];
char resultado9;
float primeira_hora9;
float segunda_hora9;

//Variáveis 10.
char modelo_do_carro10[20];
char placa_do_carro10[9];
char cor_do_carro10[20];
char dadoscarro10[20];
int vaga10;
char data_entrada10[11];
char hora_entrada10[10];
char data_saida10[9];
char hora_saida10[10];
char resultado10;
float primeira_hora10;
float segunda_hora10;         

//Função principal.
      
       int main() { 
           int opcao;
           
/* código das ações iniciais */ 

do{
     

//Coloquei dentro do While para poder aparecer o menu sempre e pedir a próxima opção.
   
   printf("\nMenu principal:\n\n 1 - Entrada de carros.\n 2 - Sa%cda de carros.\n 3 - Controle do estacionamento.\n 4 - Emiss%co da nota fiscal.\n 5 - Movimenta%c%co do caixa.\n 7 - Sair.\n\n", 161, 198, 135, 198);
   printf("Escolha a Op%c%co: ", 135, 198);  
     scanf("%d", &opcao); 
         system("cls"); 

                switch (opcao) { 
                       
         case 1://Entrada de carros. 
  
          //Menu para cadastrar as vagas.   
              printf("\nMenu de cadastros de vagas.\n\nIforme a vaga:\n\n 1 - Vaga 01.\n 2 - Vaga 02.\n 3 - Vaga 03.\n 4 - Vaga 04.\n 5 - Vaga 05.\n 6 - Vaga 06.\n 7 - Vaga 07.\n 8 - Vaga 08.\n 9 - Vaga 09.\n 10 - Vaga 10.\n 11 - Sair.\n\n");
              printf("Escolha a Op%c%co: ", 135, 198);  
                scanf("%d", &opcao); 
                   system("cls"); 


      switch (opcao) { 
case 1://Vaga 01.   
         
 if (vaga==NULL) {                                                  
                
                printf("Digite os Dados !\n");
                gets(dadoscarro);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro);
                fflush(stdin);
                
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada);
                fflush(stdin);
               
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada);
                fflush(stdin);
                
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada);
                    
                    printf("\nN%cmero da vaga :", 163);
                    printf("%d",vaga);
                    printf("\n");

                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);  
                }
                    
         break;
      
 case 2://Vaga 02.
             
    if (vaga2==NULL) {   
               
                printf("Digite os Dados !\n");
                gets(dadoscarro2);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro2);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro2);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro2);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga2);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada2);
                fflush(stdin);
               
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada2);
                fflush(stdin);
               
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro2);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro2);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro2);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada2);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada2);
                    
                    printf("\nNumero da vaga :%d", vaga2);
 
                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                             
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                
         break;
 
 case 3://Vaga 03.
 
  if (vaga3==NULL) { 
                   
                printf("Digite os Dados !\n");
                gets(dadoscarro3);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro3);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro3);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro3);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga3);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada3);
                fflush(stdin);
               
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada3);
                fflush(stdin);
               
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro3);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro3);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro3);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada3);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada3);
                    
                    printf("\nNumero da vaga :%d", vaga3);
                    
                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                             
        break;
     
case 4://Vaga 04.

 if (vaga4==NULL) { 
                  
                printf("Digite os Dados !\n");
                gets(dadoscarro4);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro4);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro4);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro4);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga4);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada4);
                fflush(stdin);
               
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada4);
                fflush(stdin);
                
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro4);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro4);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro4);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada4);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada4);
                    
                    printf("\nNumero da vaga :%d", vaga4);

                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                             
       break;
     
case 5://Vaga 05.

 if (vaga5==NULL) { 
                  
                printf("Digite os Dados !\n");
                gets(dadoscarro5);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro5);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro5);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro5);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga5);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada5);
                fflush(stdin);
               
               printf("\nInforme a hora de entrada :");
               gets(hora_entrada5);
               fflush(stdin);
               
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro5);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro5);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro5);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada5);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada5);
                
                    printf("\nNumero da vaga :%d", vaga5);
 
                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                             
        break;
     
 case 6://Vaga 06.
 
  if (vaga6==NULL) { 
                   
                printf("Digite os Dados !\n");
                gets(dadoscarro6);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro6);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro6);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro6);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga6);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada6);
                fflush(stdin);
               
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada6);
                fflush(stdin);
               
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                   
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro6);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro6);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro6);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada6);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada6);
                    
                    printf("\nNumero da vaga :%d", vaga6);
 
                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                             
         break;
 
case 7://Vaga 07.

 if (vaga7==NULL) { 
                  
                printf("Digite os Dados !\n");
                gets(dadoscarro7);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro7);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro7);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro7);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga7);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada7);
                fflush(stdin);
               
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada7);
                fflush(stdin);
               
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro7);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro7);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro7);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada7);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada7);
                    
                    printf("\nNumero da vaga :%d", vaga7);
                    
                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                             
        break;
     
case 8://Vaga 08.

 if (vaga8==NULL) { 
                  
                printf("Digite os Dados !\n");
                gets(dadoscarro8);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro8);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro8);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro8);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga8);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada8);
                fflush(stdin);
               
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada8);
                fflush(stdin);
               
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro8);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro8);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro8);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada8);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada8);
                    
                    printf("\nNumero da vaga :%d", vaga8);

                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                             
        break;
     
case 9://Vaga 09.

 if (vaga9==NULL) { 
                  
                printf("Digite os Dados !\n");
                gets(dadoscarro9);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro9);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro9);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro9);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga9);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada9);
                fflush(stdin);
                
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada9);
                fflush(stdin);
               
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    
                    printf("\nModelo do carro inserido:");
                    printf(modelo_do_carro9);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro9);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro9);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada9);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada9);
                    
                    printf("\nNumero da vaga :%d", vaga9);
 
                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                             
          break;
     
 case 10://Vaga 10.
 
  if (vaga10==NULL) { 
                   
                printf("Digite os Dados !\n");
                gets(dadoscarro10);
               
                printf("\nInforme o modelo do carro :");
                gets(modelo_do_carro10);
                fflush(stdin);
                
                printf("\nInforme a placa :");
                gets(placa_do_carro10);
                fflush(stdin);
      
                printf("\nInforme a cor do carro :");
                gets(cor_do_carro10);
                fflush(stdin);
              
                printf("\nEntre com o n%cmero da vaga :", 163);
                scanf("%d", &vaga10);
                fflush(stdin);
               
                printf("\nInforme a data de entrada :");
                gets(data_entrada10);
                fflush(stdin);
               
                printf("\nInforme a hora de entrada :");
                gets(hora_entrada10);
                fflush(stdin);
               
        system("cls");
        
                    printf("Dados do Carro Conferem :\n\n");
                    
                    printf("\nModelo do carro inserido :");
                    printf(modelo_do_carro10);
                    
                    printf("\nPlaca do carro :");
                    printf(placa_do_carro10);
                
                    printf("\nCor do carro :");
                    printf(cor_do_carro10);
                    
                    printf("\nData de entrada :");
                    printf(data_entrada10);
                    
                    printf("\nHora de entrada :");
                    printf(hora_entrada10);
                    
                    printf("\nNumero da vaga :%d", vaga10);
                    
                    printf("\n\nEntrada com sucesso, Voltando ao menu inicial !\n\n\n");
                    
                    }else  {
               printf("\nEsta vaga est%c ocupada no momento.\n", 160);    
                }
                
              }                    
     break;

       while (opcao != 11);
         
         case 2://Saída de carro.    
        
        //Menu para saída de carros.  
              printf("\nMenu de sa%cda de carros.\n\nInforme a vaga:\n\n 1 - Vaga 01.\n 2 - Vaga 02.\n 3 - Vaga 03.\n 4 - Vaga 04.\n 5 - Vaga 05.\n 6 - Vaga 06.\n 7 - Vaga 07.\n 8 - Vaga 08.\n 9 - Vaga 09.\n 10 - Vaga 10.\n 11- Sair.\n\n", 161);
              printf("Escolha a Op%c%co: ", 135, 198);  
                scanf("%d", &opcao); 
                  system("cls"); 

      switch (opcao) { 
             
case 1://Vaga 01.  
                if(vaga==1){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro);
                     
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga);
                fflush(stdin);
                vaga=NULL;
                
                printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
               
                }else{
           printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                      }   
         break;
              
case 2 ://Vaga 02.  
                if(vaga2==2){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro);
                     
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga2);
                fflush(stdin);
                vaga2=NULL;
                
                printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
                  
                }else{
           printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                      }   
         break;
         
case 3://Vaga 03.    
                if(vaga3==3){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro);
                     
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga3);
                fflush(stdin);
                vaga3=NULL;
                
                printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
                  
                }else{
           printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                      }   
                            
         break;
case 4://Vaga 04.    
                if(vaga4==4){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro);
                     
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga4);
                fflush(stdin);
                vaga4=NULL;
                
               printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
                  
               }else{
          printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                     }   
                     
         break;
         
case 5://Vaga 05.  
                if(vaga5==5){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro);
                
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga5);
                fflush(stdin);
                vaga5=NULL;
                printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
                
                }else{
           printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                      }   
         break;
         
case 6://Vaga 06.  
                if(vaga6==6){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro);
                
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga6);
                fflush(stdin);
                vaga6=NULL;
                
                printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
               
                }else{
          printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                     }   
         break;
         
case 7://Vaga 07.  
                if(vaga7==7){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro); 
                    
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga7);
                fflush(stdin);
                vaga7=NULL;
                
                  printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
               
                }else{
           printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                      }   
         break;
         
case 8://Vaga 08.  
                if(vaga8==8){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro); 
                    
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga8);
                fflush(stdin);
                vaga8=NULL;
                
                printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
                
                }else{
           printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                      }   
         break;
         
case 9://Vaga 09  
                if(vaga9==9){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro);  
                   
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga9);
                fflush(stdin);
                vaga9=NULL;
                
                printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
                
                }else{
           printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                      }   
         break;
         
case 10://Vaga 10. 
                if(vaga10==10){
                printf("Estaremos efetuando sua sa%cda, por favor:\n", 161);
                gets(dadoscarro); 
                    
                printf("\nInforme o n%cmero da vaga novamente :", 163);
                scanf("%d", &vaga10);
                fflush(stdin);
                vaga10=NULL;
                
                printf ("\nSa%cda do carro com sucesso, Voltando ao menu inicial !:\n\n\n", 161);
                
                }else{
           printf ("\nErro de sa%cda, a vaga j%c est%c vazia !:\n\n\n", 161, 160, 160);
                      }   
      }
         break;
    
       while (opcao != 11);
        
         case 3://Controle do estacionamento.
                  
                   //Menu para controle do estacionamento.  
              printf("\nMenu de controle de estacionamento.\n\nInforme a vaga:\n\n 1 - Vaga 01.\n 2 - Vaga 02.\n 3 - Vaga 03.\n 4 - Vaga 04.\n 5 - Vaga 05.\n 6 - Vaga 06.\n 7 - Vaga 07.\n 8 - Vaga 08.\n 9 - Vaga 09.\n 10 - Vaga 10.\n 11 - Sair.\n\n");
              printf("Escolha a Op%c%co: ", 135, 198);  
                scanf("%d", &opcao); 
                   system("cls"); 

      switch (opcao) { 
             case 1://vaga 01.
                   
                    if(vaga==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");             
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga);
                   printf("\nA vaga est%c dispon%cvel!:\n\n\n", 160, 161);
                   
                   vaga=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160); 
                      }
              break;
               
               case 2://vaga 02.     
                   
                    if(vaga2==NULL){
                   printf("Entre novamente com a vaga para podermos obter seus dados:\n");                 
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga2);
                   printf("\nA Vaga est%c dispon%cvel!:\n\n\n", 160, 161);
                   
                   vaga2=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
              break;
              
                case 3://vaga 03.                
                   
                    if(vaga3==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");                 
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga3);
                   printf("\nA vaga est%c dispon%cvel!:\n\n\n", 160, 161);
                   
                   vaga3=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
              break;
              
                case 4://vaga 04.                  
                
                    if(vaga4==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");                 
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga4);
                   printf("\nA vaga est%c dipon%cvel!:\n\n\n", 160, 161);
                   
                   vaga4=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
              break;
              
                case 5://vaga 05.                   
                   
                    if(vaga5==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");                 
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga5);
                   printf("\nA vaga est%c dispon%cvel!:\n\n\n", 160, 161);
                   
                   vaga5=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
              break;
              
                case 6://vaga 06.                  
                   
                    if(vaga6==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");                 
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga6);
                   printf("\nA vaga est%c dipon%cvel!:\n\n\n", 160, 161);
                   
                   vaga6=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
              break;
              
                case 7://vaga 07.                     
                   
                    if(vaga7==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");                 
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga7);
                   printf("\nA vaga est%c dispon%cvel!:\n\n\n",160, 161);
                   
                   vaga7=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
              break;
              
                case 8://vaga 08.                   
                   
                   if(vaga8==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");                
                   printf("\nEntre com o n%xmero da vaga :", 163);
                    scanf("%d", &vaga8);
                   printf("\nA vaga est%c dispon%cvel!:\n\n\n",160,  161);
                   
                   vaga8=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
              break;
              
                case 9://vaga 09.                    
                   
                    if(vaga9==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");                 
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga9);
                   printf("\nA vaga est%c dispon%cvel!:\n\n\n",160, 161);
                   
                   vaga9=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
              break;
              
                case 10://vaga 10.                    
                   
                    if(vaga10==NULL){
                   printf("Entre novamente com a vaga para que possamos obter seus dados:\n");                  
                   printf("\nEntre com o n%cmero da vaga :", 163);
                    scanf("%d", &vaga10);
                   printf("\nA vaga est%c dispon%cvel!:\n\n\n",160, 161);
                   
                   vaga10=NULL;
                   
                 }else{
                   printf("\nA vaga est%c ocupada no momento!:\n\n\n", 160);     
                      }
    }
    break;
    
       while (opcao != 11);
        
         case 4://Emissão de nota fiscal.
                
                //Menu para a emissão de notas de entrada e saída.   
              printf("\nMenu de emiss%co de notas de entrada e sa%cda:\n\n 1 - Emiss%co da nota de entrada.\n 2 - Emiss%co da nota de sa%cda.\n 3 - Sair.\n\n", 198, 161, 198, 198, 161 );
              printf("Escolha a Op%c%co: ", 135, 198);  
                 scanf("%d", &opcao); 
                     system("cls"); 

      switch (opcao) { 
                 
                case 1://Emissão de nota de entrada.
                     
                           //Menu para controlar emissão de notas de entrada.  
                                 printf("\nMenu para controle da emiss%co de notas de entrada.\n\nInforme a vaga:\n\n 1 - Vaga 01.\n 2 - Vaga 02.\n 3 - Vaga 03.\n 4 - Vaga 04.\n 5 - Vaga 05.\n 6 - Vaga 06.\n 7 - Vaga 07.\n 8 - Vaga 08.\n 9 - Vaga 09.\n 10 - Vaga 10.\n 11 - Sair.\n\n", 198);
                                 printf("Escolha a Op%c%co: ", 135, 198);  
                                      scanf("%d", &opcao); 
                                           system("cls"); 

                         switch (opcao) { 
                     
                                        case 1://vaga 01.
                                                if(vaga==1){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                                                
                                                printf("Vaga 01\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);   
                                                     }
                                               
                                                 break;
                                                
                                                 
                                          case 2://vaga 02.
                                                if(vaga2==2){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                                                
                                                printf("Vaga 02\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro2);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada2);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada2);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     }
                                                     
                                                 break;
                                                 
                                          case 3://vaga 03.
                                                if(vaga3==3){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                                                
                                                printf("Vaga 03\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro3);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada3);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada3);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     }
                                                     
                                                 break;
                                                 
                                          case 4://vaga 04.
                                                if(vaga4==4){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                                                
                                                printf("Vaga 04\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro4);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada4);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada4);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     }
                                                     
                                                 break;
                                                
                                          case 5://vaga 05.
                                                if(vaga5==5){
                                          
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                                                
                                                printf("Vaga 05\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro5);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada5);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada5);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     }
                                                     
                                                 break;
                                                 
                                          case 6://vaga 06.
                                                if(vaga6==6){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                                                
                                                printf("Vaga 06\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro6);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada6);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada6);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     } 
                                                     
                                                 break;
                                                 
                                           case 7://vaga 07.
                                                if(vaga7==7){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                     
                                                printf("Vaga 07\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro7);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada7);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada7);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                 
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     }
                                                     
                                                 break;
                                                 
                                            case 8://vaga 08.
                                                if(vaga8==8){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                                                
                                                printf("Vaga 08\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro8);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada8);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada8);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     }
                                                     
                                                 break;
                                            case 9://vaga 09.
                                                if(vaga9==9){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");

                                                printf("Vaga 09\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro9);
                                                printf("\n");
                                                
                                                printf("\nData de entrada :");
                                                printf(data_entrada9);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada9);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     }
                                                     
                                                 break;
                                             case 10://vaga 10.
                                                if(vaga10==10){
                                                
                                                printf("Programa de estacionamento.\nCupom fiscal da entrada de carros.\nDados dos carros!\n");
                                                
                                                printf("Vaga 10\n");
                                                
                                                printf("\nPlaca do carro :");
                                                printf(placa_do_carro10);
                                                printf("\n");

                                                printf("\nData de entrada :");
                                                printf(data_entrada10);
                                                printf("\n");
                                                
                                                printf("\nHora de entrada :");
                                                printf(hora_entrada10);
                                                printf("\n\n");
                                                
                                                printf("\nEntrada do ve%cculo efetuada com sucesso, Voltando ao menu inicial !\n\n\n", 161);
                                                                  
                                                          }else{
                                                printf("\nA vaga esta vazia, n%co cont%cm dados.\n\n\n", 198, 130);     
                                                     }
                                                                   }    
                                                                                  
                                                                     break;

                                                                         while (opcao != 11);

                                                                                case 2 ://Emissão de nota de saída.
                                                                                
                                                                                //Menu para controlar a emissão de nota fiscal de saída.   
                                                                                     printf("\nMenu para controle da emiss%co de notas sa%cda.\n\nInforme a vaga:\n\n 1 - Vaga 01.\n 2 - Vaga 02.\n 3 - Vaga 03.\n 4 - Vaga 04.\n 5 - Vaga 05.\n 6 - Vaga 06.\n 7 - Vaga 07.\n 8 - Vaga 08.\n 9 - Vaga 09.\n 10 - Vaga 10.\n 11 - Sair.\n\n", 198, 161);
                                                                                     printf("Escolha a Op%c%co: ", 135, 198);  
                                                                                        scanf("%d", &opcao); 
                                                                                            system("cls"); 
                                                                                                switch (opcao) { 
                                                                                            
                                                                                case 1://vaga 01.             
                                                                                  if(vaga==1){
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 01.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                   
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                  
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado);
                                                                                  fflush(stdin);
                                                                                           
                                                                                           primeira_hora =15.50;
                                                                                           segunda_hora=NULL;
                                                                                           
                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
                                                                                     if (resultado == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora);
                                                                                           
                                                                                                 
                                                                                                     } else {
                                                                                             segunda_hora = 10 ;
                                                                                             primeira_hora=NULL;
                                                                                             
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                                   }else{
                                                                                          printf("\nA vaga est%c vazia, n%co contem dados.\n\n\n", 160, 198);     
                                                                                               }
                                                                             break;
                                                                                  
                                                                                  case 2://vaga 02.             
                                                                                  if(vaga2==2){ 
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 02.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro2);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada2);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada2);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                                                                                             
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado2);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora2 =15.50;
                                                                                           segunda_hora2=NULL;
                                                                                           
                                                                                     if (resultado2 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora2);
                                                                                                 
                                                                                                     } else {
                                                                                             segunda_hora2 = 10 ;
                                                                                             primeira_hora2=NULL;
                                                                                           
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora2);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                      
                                                                                                  }else{
                                                                                          printf("\nA vaga est%c vazia, n%co contem dados.\n\n\n", 160, 198);     
                                                                                               }      
                                                                             break;
                                                                              
                                                                                  case 3://vaga 03.             
                                                                                  if(vaga3==3){
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 03.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro3);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada3);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada3);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de saida :", 161);
                                                                                  system ("time/t");
                                                                                                                                                              
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado3);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora3 =15.50;
                                                                                           segunda_hora3=NULL;
                                                                                           
                                                                                     if (resultado3 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora3);
                                                                                                 
                                                                                                     } else {
                                                                                                            segunda_hora3 = 10 ;
                                                                                                            primeira_hora3=NULL;
                                                                                                            
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora3);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                           
                                                                                           }else{
                                                                                          printf("\nA vaga est%c vazia, n%co contem dados.\n\n\n", 160, 198);     
                                                                                               }      
                                                                             break;
                                                                                   
                                                                                  case 4://vaga 04.             
                                                                                  if(vaga4==4){
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 4.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro4);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada4);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada4);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                                                                                            
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado4);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora4 =15.50;
                                                                                           segunda_hora4=NULL;
                                                                                           
                                                                                     if (resultado4 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora4);
                                                                                                 
                                                                                                     } else {
                                                                                                            segunda_hora4 = 10 ;
                                                                                                            primeira_hora4=NULL;
                                                                                                            
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora4);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                              
                                                                                              }else{
                                                                                          printf("\nA vaga est%c vazia, n%co contem dados.\n\n\n", 160, 198);     
                                                                                               }   
                                                                             break;
                                                                              
                                                                                  case 5://vaga 05.             
                                                                                  if(vaga5==5){
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 05.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro5);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada5);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada5);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                                                                                            
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado5);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora5 =15.50;
                                                                                           segunda_hora5=NULL;
                                                                                           
                                                                                     if (resultado5 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora5);
                                                                                                 
                                                                                                     } else {
                                                                                                            segunda_hora5 = 10 ;
                                                                                                            primeira_hora5=NULL;
                                                                                                            
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora5);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                              
                                                                                              }else{
                                                                                          printf("\nA vaga est% vazia, n%o contem dados.\n\n\n", 160, 198);     
                                                                                               }   
                                                                             break;
                                                                              
                                                                                  case 6://vaga 06.             
                                                                                  if(vaga6==6){
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 06.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro6);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada6);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada6);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                  
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado6);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora6 =15.50;
                                                                                           segunda_hora6=NULL;
                                                                                           
                                                                                     if (resultado6 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora6);
                                                                                                 
                                                                                                     } else {
                                                                                                            segunda_hora6 = 10 ;
                                                                                                            primeira_hora6=NULL;
                                                                                                            
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora6);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                              
                                                                                              }else{
                                                                                          printf("\nA vaga est%c vazia, n%co contem dados.\n\n\n", 160, 198);     
                                                                                               }   
                                                                             break;
                                                                              
                                                                                  case 7://vaga 07.
                                                                                  if(vaga7==7){             
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 07.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro7);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada7);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada7);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                  
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado7);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora7 =15.50;
                                                                                           segunda_hora7=NULL;
                                                                                           
                                                                                     if (resultado7 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora7);
                                                                                                 
                                                                                                     } else {
                                                                                                            segunda_hora7 = 10 ;
                                                                                                            primeira_hora7=NULL;
                                                                                                            
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora7);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                              
                                                                                              }else{
                                                                                          printf("\nA vaga est%c vazia, n%co contem dados.\n\n\n", 160, 198);     
                                                                                               }   
                                                                             break;
                                                                              
                                                                                  case 8://vaga 08.             
                                                                                  if(vaga8==8){
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 08.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro8);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada8);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada8);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                                                                                      
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado8);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora8 =15.50;
                                                                                           segunda_hora8=NULL;
                                                                                           
                                                                                     if (resultado8 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora8);
                                                                                                 
                                                                                                     } else {
                                                                                                            segunda_hora8 = 10 ;
                                                                                                            primeira_hora8=NULL;
                                                                                                            
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora8);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                              
                                                                                              }else{
                                                                                          printf("\nA vaga est% vazia, n%co contem dados.\n\n\n", 160, 198);     
                                                                                               }   
                                                                             break;
                                                                              
                                                                                  case 9://vaga 09.             
                                                                                  if(vaga9==9){
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 09.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro9);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada9);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada9);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                                                                                               
                                                                                  printf ("\nInforme quantas horas o carro ficou no estacionamento?");
                                                                                  scanf("%d", &resultado9);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora9 =15.50;
                                                                                           segunda_hora9=NULL;
                                                                                           
                                                                                     if (resultado9 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora9);
                                                                                                 
                                                                                                     } else {
                                                                                                            segunda_hora9 = 10 ;
                                                                                                            primeira_hora9=NULL;
                                                                                                            
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora9);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                              
                                                                                              }else{
                                                                                          printf("\nA vaga est%c vazia, no contem dados.\n\n\n", 160, 198);     
                                                                                               }   
                                                                             break;
                                                                              
                                                                                  case 10://vaga 10.           
                                                                                  if(vaga10==10){
                                                                                  printf("Programa de estacionamento.\nCupom fiscal da sa%cda de carros.\nDados dos carros :\n", 161);
                                                                                
                                                                                  printf("Vaga 10.\n");
                                                                                  
                                                                                  printf("\nPlaca do carro :");
                                                                                  printf(placa_do_carro10);
                                                                                  printf("\n");
                                                                                  
                                                                                  printf("\nData de entrada :");
                                                                                  printf(data_entrada10);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nHora de entrada :");
                                                                                  printf(hora_entrada10);
                                                                                  printf("\n");
                                                
                                                                                  printf("\nData de sa%cda :", 161);
                                                                                  system ("date/t");
                                                                                  
                                                                                  printf("\nHora de sa%cda :", 161);
                                                                                  system ("time/t");
                                                                                                                                                             
                                                                                 printf ("\nInforme quantas horas o carro ficou no estacionamento?");  
                                                                                  scanf("%d", &resultado10);
                                                                                  fflush(stdin);
                                                                                  
                                                                                           primeira_hora10 =15.50;
                                                                                           segunda_hora10=NULL;
                                                                                           
                                                                                     if (resultado10 == 1) {      
                                                                                  
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", primeira_hora10);
                                                                                                 
                                                                                                     } else {
                                                                                                            segunda_hora10 = 10 ;
                                                                                                            primeira_hora10=NULL;
                                                                                                            
                                                                                           printf("\nSera cobrado o seguinte valor: %.2f", ++segunda_hora10);
                                                                                                }
                            
                                                                                  printf("\nObrigado pela pref%crencia, volte sempre!", 136);
                                                                                              
                                                                                  printf("\nSa%cda do ve%cculo efetuada com sucesso, voltando ao menu inicial !\n\n\n", 161, 161);
                                                                                          
                                                                                          }else{
                                                                                          printf("\nA vaga est%c vazia, n%co contem dados.\n\n\n", 160, 198);     
                                                                                               }   
                                                                                          }                    
                                                                                              break;
                                                                                                  while (opcao != 11);
              
    }                    
       break;

          while (opcao != 3);
                                                                                                     
          case 5://Movimentação do caixa.
          printf("\nMenu para movimenta%c%co do caixa.\n\n 1 - Carros que ficaram 1:00 hora ou menos! \n 2 - Carros que ficaram 1:00 hora ou mais! \n 3 - Valor total do caixa. \n 4 - Sair.\n\n", 135, 198);
          printf("Escolha a Op%c%co: ", 135, 198);  
             scanf("%d", &opcao); 
                system("cls"); 
                   switch (opcao) {
                                                                                                       
case 1://1:00 hora ou menos.                                   
          printf("Fechamento dos carros que ficaram 1:00 hora ou menos!");
          printf("\n\n");
          valor = primeira_hora + primeira_hora2 + primeira_hora3 + primeira_hora4 + primeira_hora5 + primeira_hora6 + primeira_hora7 + primeira_hora8 + primeira_hora9 + primeira_hora10;
          printf("Vaga 01: %.2f + \nVaga 02: %.2f + \nVaga 03: %.2f + \nVaga 04: %.2f + \nVaga 05: %.2f + \nVaga 06: %.2f + \nVaga 07: %.2f + \nVaga 08: %.2f + \nVaga 09: %.2f + \nVaga 10: %.2f = \nValor total: %.2f Reais.\n", primeira_hora, primeira_hora2, primeira_hora3, primeira_hora4, primeira_hora5, primeira_hora6, primeira_hora7, primeira_hora8, primeira_hora9, primeira_hora10, valor);
          
          break;
          
case 2://1:00 hora ou mais.
          printf("\nFechamento dos carros que ficaram 1:00 hora ou mais!");
          printf("\n\n");
          valor2 = segunda_hora + segunda_hora2 + segunda_hora3 + segunda_hora4 + segunda_hora5 + segunda_hora6 + segunda_hora7 + segunda_hora8 + segunda_hora9 + segunda_hora10;
          printf("Vaga 01: %.2f + \nVaga 02: %.2f + \nVaga 03: %.2f + \nVaga 04: %.2f + \nVaga 05: %.2f + \nVaga 06: %.2f + \nVaga 07: %.2f + \nVaga 08: %.2f + \nVaga 09: %.2f + \nVaga 10: %.2f = \nValor total: %.2f Reais.\n", segunda_hora, segunda_hora2, segunda_hora3, segunda_hora4, segunda_hora5, segunda_hora6, segunda_hora7, segunda_hora8, segunda_hora9, segunda_hora10, valor2);
          printf("\n\n");
          
          break;
          
case 3://Valor total.
          printf("Valor total do caixa:");
          printf("\n\n");
          valor3 = valor + valor2;
          printf("\nCarros que ficaram 1:00 hora ou menos: %.2f + \nCarros que ficaram 1:00 hora ou mais:  %.2f = \nValor total no caixa:                  %.2f Reais.\n", valor, valor2, valor3);
          printf("\n\n");
          
             }                    
          break;
                                                                                                 
               while (opcao != 4);
          
          break;
               
         default: 
            printf("Opção inválida\n"); 
        
      } 
     
   } 

    while (opcao != 7);//Não pode ser 6 pelo fato de ter o case 6, então isso ira gerar um conflito e o programa ira fechar.
 
   /* Código das ações finais. */ 
   return 0; 
}
