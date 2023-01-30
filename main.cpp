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
         getline(cin,giorni_della_settimana);
         int vettore_delle_posizioni[100];
         int variabile_contatore_delle_posizioni=0;
         for (int variabile_contatore=0; variabile_contatore<numero_macchine; variabile_contatore++)
         {
             bool ok=true;
            if(vettore_delle_auto[variabile_contatore].categoria==categoria_scelta)
            {

              for (int n=0; n<giorni_della_settimana.length());n++)
                    switch(giorni_della_settimana.at(n))
                    {

                        case '1': if(vettore_delle_auto[variabile_contatore].lunedi==" A")
                                    ok=false;
                                    break;
                        case '2': if(vettore_delle_auto[variabile_contatore].martedi==" A")
                                    ok=false;
                                    break;
                        case '3': if(vettore_delle_auto[variabile_contatore].mercoledi==" A")
                                    ok=false;
                                    break;
                        case '4': if(vettore_delle_auto[variabile_contatore].giovedi==" A")
                                    ok=false;
                                    break;
                        case '5': if(vettore_delle_auto[variabile_contatore].venerdi==" A")
                                    ok=false;
                                    break;
                        case '6': if(vettore_delle_auto[variabile_contatore].sabato==" A")
                                    ok=false;
                                    break;
                        case '7': if(vettore_delle_auto[variabile_contatore].domenica==" A")
                                    ok=false;
                    }
            vettore_delle_posizioni[variabile_contatore_delle_posizioni] = variabile_contatore;
            variabile_contatore_delle_posizioni++;
            }


             }


             cout<<"scegliere una delle seguenti auto";
             for (int b=0; b<variabile_contatore_delle_posizioni;b++)
             {


               cout<<b+1<<'-'<<vettore_delle_auto[vettore_delle_posizioni[b]].categoria<<' '<<vettore_delle_auto[vettore_delle_posizioni[b]].marca<<' '
               <<vettore_delle_auto[vettore_delle_posizioni[b]].modello<<' '<<vettore_delle_auto[vettore_delle_posizioni[b]].colore<<' '
               <<vettore_delle_auto[vettore_delle_posizioni[b]].lunedi<<' '<<vettore_delle_auto[vettore_delle_posizioni[b]].martedi<<' '
               <<vettore_delle_auto[vettore_delle_posizioni[b]].mercoledi<<' '<<vettore_delle_auto[vettore_delle_posizioni[b]].giovedi<<' '
               <<vettore_delle_auto[vettore_delle_posizioni[b]].venerdi<<' '<<vettore_delle_auto[vettore_delle_posizioni[b]].sabato<<' '
               <<vettore_delle_auto[vettore_delle_posizioni[b]].domenica<<'\n ';

             }

                string le_auto;
                cout<<"che auto desidera";
                cin>> le_auto;










    return 0;

}
