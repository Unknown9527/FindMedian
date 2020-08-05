#include "src/lib/solution.h"
#include <iostream>

using namespace std;

int main() {
  Solution solution;

  std::vector<int> input = {};
    cout << "input: nothing & output: " << solution.FindMedian(input) << endl;

  input = {1,20,40,100};
  std::cout << "input: 1,20,40,100 & output: " << solution.FindMedian(input) << endl;

  input = {1,20,40,60,65,100};
  std::cout << "input: 1,20,40,60,65,100 & output: " << solution.FindMedian(input) << endl;

  return 0;
}