/*Airline ticket reservation
    Emily Soto 
    Madeline Salguero
*/
 
//librerias
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
//macros

//Prototipo de funciones
void clearscreen(){
    system("@cls||clear");
}

//Variables globales
 char vuelo[5];
 int length;
 int seleccion;

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
    printf("\n¿Que desea realizar?\n\n 1: Para reservar asiento \n 2: Para ver disponibilidad de asientos \n 3: Para salir \n");
    printf("===========================================================");
    printf("\n Ingrese su seleccion:  ");
    scanf("%d",&seleccion);
    

    if(seleccion==3){
        clearscreen();
        exit(0);
    }


    }
}
