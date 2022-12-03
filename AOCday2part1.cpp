#include <iostream>
#include <fstream>
using namespace std;

/* win: C X, A Y, B Z  
   draw: A X, B Y, C Z */
int main() {
  char round[3];
  int total_score = 0;
  string input;
  ifstream data("aocday2.txt");
  while (getline(data,input)){
    if (input[2] == 'X'){
      total_score += 1;
    }
    else if (input[2] == 'Y'){
      total_score += 2;
    }
    else {
      total_score += 3;
    }
    if (input == "A X" || input == "B Y" || input == "C Z"){
      total_score += 3;
    }
    else if (input == "C X" || input == "A Y" || input == "B Z"){
      total_score += 6;
    }
  }
  cout << total_score;
  return 0;
}