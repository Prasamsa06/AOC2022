#include <iostream>
#include <fstream>
using namespace std;


int main() {
  string numString;
  int num;
  ifstream data("input.txt");

  int total = 0;
  int max = 0;
  while (getline(data,numString)){
    if (numString.empty()){
      if (total > max){
        max = total;
      }
      total = 0;
    }
    else {
      num = stoi(numString);
      total += num;

    }
  }
  cout << max;
  return 0;
}

  