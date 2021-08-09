/*

Program link:
https://www.hackerrank.com/challenges/staircase/problem

Staircase detail:
This is a staircase of size n=4:

   #
  ##
 ###
####

Its base and height are both equal to n. It is drawn using # symbols and spaces. The last line is not preceded by any spaces.
Write a program that prints a staircase of size n.

Sample Input:
6 

Sample Output:

     #
    ##
   ###
  ####
 #####
######

Explanation:
The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of n=6.

*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {

    int i,j;
    
    //j will start from 0 and will print space upto n-i and then print # for completing remaining pattern
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++){
            cout<<" ";
        }

        for(;j<n;j++){
            cout<<"#";
        }

        cout<<"\n";
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}