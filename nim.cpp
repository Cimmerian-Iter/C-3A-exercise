
#include <iostream>
using namespace std; 


static unsigned int table=15;

unsigned int reste_batonnet(unsigned int nb){

    while (nb>3){
        cout <<"Veuillez choisir uniquement 1 2 ou 3 batonnet" << endl;
        cin >> nb;
    }

    while (table-1<nb){
        cout <<"C'est impossible, vous ne pouvez prendre au maximum que " <<table-1<<" batonnet\n Veuillez rechoisir" << endl;
        cin >>nb;

    }    
    table = table - nb;

    return table;




}


void afficher_batonnet(){

    for(int i=0;i<table;i++){
        cout<<"| ";
    }
    cout << endl;


}
 

