#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main() {
  char item_type;
  int priority = 0;
  string input;
  ifstream data("aocday3.txt");
  while (getline(data,input)){
    string half_1(input, 0, input.length()/2);
    string half_2(input, input.length()/2);
    for (int in_1 = 0; in_1 < input.length()/2; in_1++){
      for (int in_2 = 0; in_2 < input.length()/2; in_2++){
        if (half_1[in_1] == half_2[in_2]){
          item_type = half_2[in_2];
          break;
        }
      if (item_type == half_1[in_1]){
        break;
      }
      }
    }
    if (islower(item_type)){
    priority += (int(item_type) - 96);
    }
    else{
    priority += (int(item_type) - 38);
    }
  }
  cout << priority;
  return 0;
}