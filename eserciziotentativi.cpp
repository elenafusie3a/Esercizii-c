//1. Inserisci un codice errore: 400  allora Bad Request, 401 allora Unauthorized, 403 allora Forbidden, 404 allora Not Found, 
//altro allora Errore sconosciuto, 200 allora corretto. 
//Fai un ciclo dove se l'utente sbaglia più di 3 volta allora esce dal programma e non permette di più di riprovare

#include <iostream>
#include <string>
using namespace std;
int main(){
    int tentativi;
    int n;
    cin>>tentativi;
    cout<<"inserisci il numero"<<endl;
    cin>>n;

    while(tentativi<3){

switch (n) {
case 400: 
cout<<"Bad Request"<<endl;
break;
tentativi++;

case 401:
cout<<"Unauthorized"<<endl;
break;
tentativi++;

case 403:
cout<<"Forbidden"<<endl;
break;
tentativi++;

case 404:
cout<<"Not Found"<<endl;
break;
tentativi ++;

case 200:
cout<<"corretto"<<endl;
break;

 default:
cout<<"errore sconosciuto"<<endl;
break;
tentativi++;
}
    }
}

    