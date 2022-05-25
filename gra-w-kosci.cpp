#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <cstdlib> // getchar()

using namespace std;

int throwDie(){
    int die_number=rand()%5+1;

    cout << "-----" << endl;
    switch(die_number){
        case 1:
            cout << "|   |" << endl;
            cout << "| o |" << endl;
            cout << "|   |" << endl;
            break;
        case 2:
            cout << "|o  |" << endl;
            cout << "|   |" << endl;
            cout << "|  o|" << endl;
            break;
        case 3:
            cout << "|o  |" << endl;
            cout << "| o |" << endl;
            cout << "|  o|" << endl;
            break;
        case 4:
            cout << "|o o|" << endl;
            cout << "|   |" << endl;
            cout << "|o o|" << endl;
            break;
        case 5:
            cout << "|o o|" << endl;
            cout << "| o |" << endl;
            cout << "|o o|" << endl;
            break;
        case 6:
            cout << "|o o|" << endl;
            cout << "|o o|" << endl;
            cout << "|o o|" << endl;
            break;
    }
    cout << "-----";

    return die_number;
}

int main(){

    int player1[3], player2[3];
    char click_to_throw;
    srand(time(NULL));

    cout << "========== GRA W KOSCI ==========" << endl;
    cout << " Kliknij ENTER, by rzucić kostka" << endl;

    cout << "=================================" << endl;
    cout << " Ruch gracza pierwszego:";

    for(int i=0; i<3; i++){
        getchar();
        player1[i]=throwDie();
    }
    
    cout << endl << "=================================" << endl;
    cout << " Ruch gracza drugiego:";

    for(int i=0; i<3; i++){
        getchar();
        player2[i]=throwDie();
    }

    cout << endl << "=================================" << endl;

    int player1_sum=0, player2_sum=0;
    for(int i=0; i<3; i++){
        player1_sum+=player1[i];
        player2_sum+=player2[i];
    }

    if(player1_sum==player2_sum) cout << " REMIS!" << endl;
    if(player1_sum>player2_sum) cout << " Pierwszy gracz wygrywa!" << endl;
    if(player1_sum<player2_sum) cout << " Drugi gracz wygrywa!" << endl;

    cout << "=================================" << endl << endl;

    return 0;
}