#include <stdio.h>
#include <string.h>
#include "prototipi.h"
#include <cmath>
using namespace std;

void itostr(int numero, char* numeroS){
    int i = 0;
    while((numero % 10) != numero){// fichè il numero deve è divisibile per dieci;
        numeroS[i] = (numero % 10) + 48; // aggiungo 48 al resto, per raggiungere il codice ASCII del carattere corrispondente;
        numero = numero / 10;//divido il numero per 10;
        i++;//incremento l'indice della stringa;
    }
    numeroS[i] = (numero % 10) + 48;//quando il numero non è più divisibile per 10, aggiungo il risultato della divisione, sempre aggiungendo 48;
    //inverto la stringa;
    int j = 0;
    int k = strlen(numeroS) - 1;
    int temp = 0;
    for(j = 0; j < strlen(numeroS) / 2; j++){
        temp = numeroS[j];
        numeroS[j] = numeroS[k];
        numeroS[k] = temp;
        k--;

    }

}

int strtoi(char* numeroS){
    int i = 0;//indice della stringa;
    int numero = 0;//variabile che conterrà il numero intero ottenuto dalla stringa;
    int power = strlen(numeroS) - 1;//la potenza sarà uguale alla posizione del carattere nella stringa;
    while(numeroS[i] != '\0'){
        numero += (numeroS[i] - 48) * pow(10, power);//sommo ogni carattere diminuito di 48 (per via dell'ASCII) e lo moltiplico per 10^posizione del carattere;
        i++;//incremento l'indice;
        power--;//decremento la potenza;
    }
    return numero;//restituisco il numero ottenuto;
}