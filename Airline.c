/*Airline ticket reservation
    Emily Soto 
    Madeline Salguero
*/
 
//librerias
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
//macros
#define rows 20
#define cols 6

//Prototipo de funciones
void clearscreen(){
    system("@cls||clear");
}

//Variables globales
 char vuelo[5];
 int length;
 int seleccion;

//funciones propuestas



//menu
int main(void){
    menu_entrada:
        clearscreen();
        printf("Ingrese el numero de vuelo:\n");
        scanf("%s", vuelo);
        length = strlen (vuelo) ;

        if (length!=5){
          goto menu_entrada;
        }

      if(length==5){
        goto menu_principal;
    menu_principal:
    clearscreen();                                            
                                             
    printf("                              _|_\n");                                            
    printf("                             |___| \n");                                          
    printf("                            |_____| \n ");                                          
    printf("                          |oo   oo| \n ");                                         
 printf("|_________________________|       |__________________________| \n");             
  printf("  `---------|------|--------|_____|--------|------|---------' \n");              
  printf("           ( )    ( )     |OOo|oOO|O     ( )    ( ) \n");   
    printf("\n                  Bienvenido vuelo: %s\n", vuelo);
    printf("===========================================================");
    printf("\n¿Que desea realizar?\n\n 1: Para reservar asiento \n 2: Para ver disponibilidad de asientos \n 3: Para ver resumen\n 4: Para salir \n");
    printf("===========================================================");
    printf("\n Ingrese su seleccion:  ");
    scanf("%d",&seleccion);
    

    if(seleccion==4){
        clearscreen();
        exit(0);
    }
  if (seleccion==2){
    clearscreen();
        printf("Disponibilidad de asientos\n\n");

 int contador=0;
 int contad_filas=1;
  printf("\n\n     | A || B || C || D || E || F |\n");
    printf(" ----------------------------------\n");
    int  matrix[rows][cols];
    for (int i = 0 ;i < rows ; i++ ){
      if (contad_filas<10){
       printf("| %i  |",contad_filas);
      }
      else if (contad_filas>=10){
       printf("| %i |",contad_filas);

      }
        for (int j=0; j < cols ; j++){
            matrix[i][j]=contador;
            printf("| %i |",matrix[i][j]);
            contador= contador ;
        }
        contad_filas=contad_filas+1;
        printf("\n");
    }    

  }

    }
}


