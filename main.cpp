#include <stdio.h>
#include <string.h>
#include "prototipi.h"
using namespace std;

int main() {
    int n = 0;//variabile contenente il numero inserito dall'utente;
    char stringaN[7] = "";//stringa che conterrà il numero convertito in stringa;


    //chiedo un numero all'utente e lo converto in stringa;
    do{
        printf("Inserisci un numero da 0 a 999.999: \n");
        scanf("%d", &n);
        if (n <= 999999 && n >= 0) {//metto un limite all'input dell'utente;
            itostr(n, stringaN);
            printf("Numero convertito in stringa: %s\n", stringaN);
        }else{
            printf("Input errato!");//se il numero è troppo grande o negativo, viene ripetuta la richiesta di input e il numero non viene convertito in stringa;

            }
    }while(n > 999999 || n < 0);


    //converto nuovamente la stringa in numero;
    int z = strtoi(stringaN);
    printf("Stringa convertita in numero: %d\n", z);



    return 0;
}
