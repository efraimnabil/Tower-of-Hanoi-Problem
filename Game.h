// @author: Efraim Nabil

#pragma once
#include <bits/stdc++.h>
#include "stack.h"
using namespace std;

class Game{
    private:
        vector <Stack> stacks_;
    public:
        Game();
        void Play();
        bool validMove(int from, int to);
        void move(int from, int to);
        
        friend ostream & operator<<(ostream & os, const Game & game);
};