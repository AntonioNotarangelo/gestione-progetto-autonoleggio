#include <iostream>
#include <fstream>

using namespace std;
int main()
{
   /*Scrivere un programma C++che permetta all'utente di inserire la categoria di macchina e i giorni in cui intende affittare l'auto
    (separati tra loro da spazio); il programma restituisce tutte le auto, se esistono, che soddisfano la richiesta dell'utente.
     II programma deve stampare il messaggio "Auto non disponibile" se non esistono auto che soddisfano le specifiche dell'utente.
     Se esistono auto disponibili l'utente deve poter scegliere un veicolo e il programma stampare a video l'elenco aggiornato di tutte le prenotazioni*/
     ifstream corridoio("auto.csv");
     string nome_variabile;
     getline(corridoio, nome_variabile);
     getline(corridoio, nome_ variabile);
     string categoria;

    while (!fin.eof())
    {
        getline(corridoio,categoria,',');
        getline(corridoio,marca,',');
        getline(corridoio,modello,',');
        getline(corridoio,colore,',');
        corridoio>>lunedì;
        corridoio>>martedì;
        corridoio>>mercoledì;
        corridoio>>giovedì;
        corridoio>>venerdì;
        corridoio>>sabato;
        corridoio>>domenica;
        cout<<categoria<<marca<<modello<<colore<<lunedì<<martedì<<mercoledì<<giovedì<<venerdì<<sabato<<domenica;
    }















    return 0;

}
