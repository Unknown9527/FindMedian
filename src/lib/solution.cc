#include "solution.h"
#include <iostream>


int Solution::FindMedian(std::vector<int> &input) 
{

  int num = input.size();
  // int mid = num / 2;
  int result;
  if (num % 2 == 1){
    result = input[num / 2];
  }
  if (input.empty() == 1) {
  return -1;
  }
  else{
    result = (input[(num / 2) - 1] + input[(num / 2)]) / 2;
  }
  
  return result;
}

