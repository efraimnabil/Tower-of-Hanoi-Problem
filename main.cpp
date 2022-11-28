// @author : Efraim Nabil
#include "Game.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    Game game;
    cout << "Welcome to the Tower of Hanoi game!" << endl;
    cout << "Initial game state: " << endl;
    cout << game << endl;

    game.Play();
    
    cout << "Final game state: " << endl;
    cout << game << endl;


    return 0;
}