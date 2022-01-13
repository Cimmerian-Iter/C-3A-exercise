#include <iostream>
#include "nim.h"
using namespace std;
int main() {
    int perdu = 0;
    int dernier_tour=0;
    int i=0;
    int rejouer=1;
    cout <<"Veuillez entrer le nom du premier joueur \n";
    string joueur1;
    cin >> joueur1;
    cout <<"Veuillez entrer le nom du second joueur \n";
    string joueur2;
    cin >> joueur2;
    afficher_batonnet();
    cout << "Il y a "<<reste_batonnet() <<" Batonnet.\n Vous pouvez chacun votre tour 1 2 ou 3 batonnet.\n Le joueur qui doit prendre le dernier batonnet restant à perdu.\n Bonne chance " <<endl;
    while (rejouer==1){
        table =15;
        while (table!=1){
            i++;
            int nb=0;
            if (i%2==0){
                cout<<joueur2<<" c'est votre tour, veuillez prendre 1 2 ou 3 batonnet "<<endl;
                cin >> nb;
                table=reste_batonnet(nb);
                dernier_tour=2;

            }
            else if(i%2!=0){
                cout<<joueur1<<" c'est votre tour, veuillez prendre 1 2 ou 3 batonnet "<<endl;
                cin >> nb;
                table=reste_batonnet(nb);
                dernier_tour=1;

            }   

            cout << "Il y a "<<reste_batonnet() <<" Batonnet.\n";
            afficher_batonnet();
            cout<<"\n";



        }

        if (dernier_tour==2) {
            cout<<joueur1<<" vous avez perdu"<<endl;

        }

        else {

            cout<<joueur2<<" vous avez perdu"<<endl;
        }

        cout <<"Voulez vous rejouer? \n ";
        cin >> rejouer;




}  
}