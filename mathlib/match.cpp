#include <iostream>
#include <vector>
#include <string>
#include "match.hpp"

using namespace std;

void dane () {
    

    vector<string> datacalki;
    vector<string>  typ;
    string data;
    // vector<string> datacalki;
    // vector<string> typ;
     cout << "wpisz calke" << endl;
     cin >> data;
     
     datacalki.push_back(data);
 
     //cala funkcja przyjmujaca dane
     for(int i = 0; i < datacalki.size(); i++) {
 
 
        char c = data[i];
 
         if (isdigit(c)) {
             typ.push_back("L");
         }
         else if (c == '/' || c == '*' || c == '^' || c == '-' || c == '+') {
             typ.push_back("Z");
         }
         else if (c == '.') {
             typ.push_back("K");
         }
         else if (c == 'x') {
             typ.push_back("X");
         }
         else if (c == '(') {
             typ.push_back("(");
         }
         else if (c == ')') {
             typ.push_back(")");
         }
         
         else {
             // Sprawdzamy funkcje matematyczne
             if (data.substr(i, 3) == "sin") {
                 typ.push_back("1");
                 i += 2; // przesuwamy o 2 bo "sin" ma 3 znaki
             }
             else if (data.substr(i, 3) == "cos") {
                 typ.push_back("2");
                 i += 2;
             }
             else if (data.substr(i, 2) == "tg") {
                 typ.push_back("3");
                 i += 1;
             }
             else if (data.substr(i, 3) == "ctg") {
                 typ.push_back("4");
                 i += 2;
             }
             else if (data.substr(i, 2) == "ln") {
                 typ.push_back("5");
                 i += 1;
             }
             else if (data.substr(i, 1) == "e") {
                 typ.push_back("e");
             }
             else if (data.substr(i, 4) == "sqrt") {
                 typ.push_back("P");
                 i += 3;
             }
             else if (data.substr(i, 3) == "log") {
                 typ.push_back("6");
                 i += 2;
             }
             else if (data.substr(i, 6) == "arcsin") {
                 typ.push_back("7");
                 i += 5;
             }
             else if (data.substr(i, 6) == "arccos") {
                 typ.push_back("8");
                 i += 5;
             }
             else if (data.substr(i, 5) == "arctg") {
                 typ.push_back("9");
                 i += 4;
             }
             else if (data.substr(i, 6) == "arcctg") {
                 typ.push_back("0");
                 i += 5;
             }
         }
     }

}
