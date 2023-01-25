#include <iostream>
#include <fstream>

using namespace std;

struct macchina{

    string categoria,marca,modello,colore;

     char lunedi,martedi,mercoledi,giovedi,venerdi,sabato,domenica;

};

int main()
{
   /*Scrivere un programma C++che permetta all'utente di inserire la categoria di macchina e i giorni in cui intende affittare l'auto
    (separati tra loro da spazio); il programma restituisce tutte le auto, se esistono, che soddisfano la richiesta dell'utente.
     II programma deve stampare il messaggio "Auto non disponibile" se non esistono auto che soddisfano le specifiche dell'utente.
     Se esistono auto disponibili l'utente deve poter scegliere un veicolo e il programma stampare a video l'elenco aggiornato di tutte le prenotazioni*/
     ifstream corridoio("auto.csv");
     string nome_variabile;
     getline(corridoio, nome_variabile);
     getline(corridoio, nome_variabile);
     macchina appoggio;
    while (!corridoio.eof())
    {
        getline(corridoio,appoggio.categoria,',');
        getline(corridoio,appoggio.marca,',');
        getline(corridoio,appoggio.modello,',');
        getline(corridoio,appoggio.colore,',');
        corridoio>>appoggio.lunedi;
        corridoio>>appoggio.lunedi;
        corridoio>>appoggio.martedi;
        corridoio>>appoggio.martedi;
        corridoio>>appoggio.martedi;
        corridoio>>appoggio.mercoledi;
        corridoio>>appoggio.mercoledi;
        corridoio>>appoggio.mercoledi;
        corridoio>>appoggio.giovedi;
        corridoio>>appoggio.giovedi;
        corridoio>>appoggio.giovedi;
        corridoio>>appoggio.venerdi;
        corridoio>>appoggio.venerdi;
        corridoio>>appoggio.venerdi;
        corridoio>>appoggio.venerdi;
        corridoio>>appoggio.sabato;
        corridoio>>appoggio.sabato;
        corridoio>>appoggio.sabato;
        corridoio>>appoggio.sabato;
        corridoio>>appoggio.domenica;
        corridoio>>appoggio.domenica;
        corridoio>>appoggio.domenica;

        cout<<appoggio.categoria<<appoggio.marca<<appoggio.modello<<appoggio.colore
        <<appoggio.lunedi<<appoggio.martedi<<appoggio.mercoledi
        <<appoggio.giovedi<<appoggio.venerdi<<appoggio.sabato<<appoggio.domenica<<endl;//<" "<<appoggio.lunedi;


    }















    return 0;

}
