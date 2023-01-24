#include<stdio.h>
int main()
{
    int s1,s2,e1,e2,S,E, duration;
    int hour , min;
    scanf("%d%d%d%d", &s1, &s2, &e1, &e2);

    S = (s1*60) + s2; // Converted starting time into min.
    E = (e1*60) + e2; //Converted ending time into min.

    if(S<E){
        duration = E-S; // The duration is in MIN.
        hour = duration/60;
        min = duration %60;
    }

    else if (S == E){
            hour = 24;
            min = 0;
    } 

    else if(S>E){
            
            duration = 1440 - S + E;
            hour = duration/ 60;
            min = duration % 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour , min);

    return 0;
}