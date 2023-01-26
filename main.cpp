#include <iostream>
#include <fstream>

using namespace std;

struct macchina{

    string categoria,marca,modello,colore;

     string lunedi,martedi,mercoledi,giovedi,venerdi,sabato,domenica;

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
     macchina vettore_delle_auto [100];
     int numero_macchine=0;

    while (!corridoio.eof())

    {
        getline(corridoio,appoggio.categoria,',');
        getline(corridoio,appoggio.marca,',');
        getline(corridoio,appoggio.modello,',');
        getline(corridoio,appoggio.colore,',');
        getline(corridoio,appoggio.lunedi, ',');
        getline(corridoio,appoggio.martedi, ',');
        getline(corridoio,appoggio.mercoledi, ',');
        getline(corridoio,appoggio.giovedi, ',');
        getline(corridoio,appoggio.venerdi, ',');
        getline(corridoio,appoggio.sabato, ',');
        getline(corridoio,appoggio.domenica, '\n');
        vettore_delle_auto[numero_macchine]=appoggio;
        numero_macchine++;


       /* cout<<appoggio.categoria<<appoggio.marca<<appoggio.modello<<appoggio.colore
        <<appoggio.lunedi<<appoggio.martedi<<appoggio.mercoledi
        <<appoggio.giovedi<<appoggio.venerdi<<appoggio.sabato<<appoggio.domenica<<endl;//<" "<<appoggio.lunedi; output di prova */




    }
         string categoria_scelta;
         string giorni_della_settimana;
         cout<<" scegli la categoria della macchina";
         cin>> categoria_scelta;
         cout<<" Quali giorni desidera affittare la macchina";
         cin.ignore();
         getline(cin,giorni_della_settimana)













    return 0;

}
