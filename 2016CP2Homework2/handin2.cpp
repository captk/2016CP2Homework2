/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   handin2.cpp
 * Author: k
 *
 * Created on 9 August 2016, 12:05 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
bool no_ell(string);
string no_ells(string);
void noel(string &);

/*
 * 
 */
int main(int argc, char** argv) {
    string s = "Noel has a canoeload of ells";
    if (no_ell(s)) {
        cout << "No ell" << endl; // should get no output
    }
    //cout << no_ells(s) << endl; // Noe has a canoeoad of es
    noel(s);
    cout << s << endl; // Christmas has a caChristmasoad of ells
    return 0;
}

bool no_ell(string s) {
    size_t foundl = s.find("l");
    size_t foundL = s.find("L");
    if (foundl != string::npos || foundL != string::npos) {
        return false;
    }
    return true;
}

string no_ells(string s) {
    size_t foundl = s.find("l");
    size_t foundL = s.find("L");
    while (foundl != string::npos) {
        s.erase(foundl, 1);
        foundl = s.find("l");
    }
    while (foundL != string::npos) {
        s.erase(foundL, 1);
        foundL = s.find("L");
    }
    return s;
}

void noel(string &s) {
    size_t foundNoel = s.find("Noel");

    while (foundNoel != string::npos) {
        s.replace(foundNoel, 4, "Christmas");
        foundNoel = s.find("Noel");
    }
    
    size_t foundnoel = s.find("noel");
    while (foundnoel != string::npos) {
        s.replace(foundnoel, 4, "Christmas");
        foundnoel = s.find("noel");
    }

}