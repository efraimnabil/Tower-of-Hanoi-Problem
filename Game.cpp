// @author : Efraim Nabil

#include "header-files/Game.h"
#include  "header-files/stack.h"
#include  "header-files/cube.h"
#include <bits/stdc++.h>
using namespace std;

Game :: Game(){
    for(int i = 0; i < 3; i++){
        Stack stack;
        stacks_.push_back(stack);
    }
    cube a(4);
    cube b(3);
    cube c(2);
    cube d(1);
    stacks_[0].push(a);
    stacks_[0].push(b);
    stacks_[0].push(c);
    stacks_[0].push(d);
}

void Game:: Play(){
       while (stacks_[2].size() != 4){
            int from, to;
            cout << "Enter a move: 1 or 2 or 3\n";
            cout << "From: ";
            cin >> from;
            cout << "To: ";
            cin >> to;
            if (from == to){
                cout << "\nInvalid move!\n" << endl;
                continue;
            }
            if (from < 1 || from > 3 || to < 1 || to > 3){
                cout << "\nInvalid move!\n" << endl;
                continue;
            }
            if (stacks_[from - 1].size() == 0){
                cout << "\nInvalid move!\n" << endl;
                continue;
            }
            if (stacks_[to - 1].size() == 0){
                stacks_[to - 1].push(stacks_[from - 1].pop());
                cout << *this << endl;
                continue;
            }
            if (stacks_[from - 1].top().getLength() < stacks_[to - 1].top().getLength()){
                stacks_[to - 1].push(stacks_[from - 1].pop());
                cout << *this << endl;
                continue;
            }
            else{
                cout << "\nInvalid move!\n" << endl;
                continue;
            }
        }
    cout << "\nCongratulations! You won!\n" << endl;
}


ostream & operator<<(ostream & os, const Game & game){
    for(int i = 0; i < game.stacks_.size(); i++){
        os << "Stack[ " << i + 1 << " ]: " << game.stacks_[i];
    }
    return os;
}
