/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   handin1.cpp
 * Author: k
 *
 * Created on 9 August 2016, 11:56 AM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;
int fact(int);

/*
 * 
 */
int main(int argc, char** argv) {
    for(int i = 1; i <= 10; i++){
        cout << setw(4) << right << i;
        cout << setw(10) << right << fact(i) << endl;
    }
    return 0;
}

int fact(int n) {
    return n > 1 ? n * fact(n - 1) : 1;
}