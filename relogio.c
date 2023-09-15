/*2- Crie um “Relógio” em linguagem C, onde haverá opção de ver o horário
atual, o cronômetro e um temporizador.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void menu(){
    printf("1 - Ver horário\n");
    printf("2 - Cronometro\n");
    printf("3 - Temporizador\n");
}

void hora(){
        time_t mytime;
        mytime = time(NULL);
        printf(ctime(&mytime));
}

void cronometro(){
    int segundo = 0;
    int minuto = 0;
    int hora = 0;
    
    for (int i = 0; i < 5; --i) {
        
        printf("\n\n\t\t%dh : %dmin : %dseg", hora, minuto, segundo);
        Sleep(1000); 
        system("CLS"); 
        segundo++;
        
        if (segundo == 60) {
            segundo = 0;  
            minuto++;
        }   
        if (minuto == 60) {
            minuto = 0;  
            hora++;
        }  
    }
}

void temporizador(){
    int segundo;
    int minuto;
    int hora;

    printf("\nQuantas horas: ");
    scanf("%i", &hora);
    printf("\nQuantos minutos: ");
    scanf("%i", &minuto);
    printf("\nQuantos segundos: ");
    scanf("%i", &segundo);
    
    while(1){
        Sleep(1000);

        if (segundo <= 0 && minuto > 0){
            segundo += 59;
            minuto --;
        }else if(hora > 0){
            minuto += 59;
            segundo += 59;
            hora --;
        }else if(segundo > 0){
            segundo --;
        }else{
            break;
        }

        if(minuto == 0 && hora > 0 ){
            minuto += 59;
            hora --;
        }
        system("cls");
        printf("\n\n\t\t%dh : %dmin : %dseg", hora, minuto, segundo);
    }
}


int main(){
    int op;

    menu();

    printf("O que você desejá fazer?");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        hora();
        break;
    case 2:
        cronometro();
        break;
    case 3: 
        temporizador();
        break;
    default:
        printf("\nDeu ruim!");
        break;
    }

}