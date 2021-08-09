/*

Program Link:
https://www.hackerrank.com/challenges/solve-me-first/problem

Ques.
Complete the function solveMeFirst to compute the sum of two integers.

Example
a=7 
b=3
Return 10.

Function Description:
Complete the solveMeFirst function in the editor below.

solveMeFirst has the following parameters:
1. int a: the first value
2. int b: the second value

Returns
- int: the sum of a and b

Sample Input:
a = 2
b = 3

Sample Output:
5

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
  return a+b;    //return the sum of 2 integers
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
