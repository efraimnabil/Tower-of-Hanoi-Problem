// @author: Efraim Nabil

#pragma once
#include "bits/stdc++.h"
#include "NS/cube.h"
using uiuc::cube;
using namespace std;
class Stack {
  public:
    void push(const cube & cube);
    cube pop();
    cube & top();
    int size() const;

    friend std::ostream& operator<<(std::ostream & os, const Stack & stack);

  private:
    vector<cube> cubes_;
};