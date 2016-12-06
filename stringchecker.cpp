/*Code taken from handout
Code used to get input file from user and
put the contents of that file into a string
Written by Ron Sarner
Modified by Christopher Muench
Language C++ (G++)
Modified October 2016
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    string inputFileName;
    string string1;
    string stringLower;
    ifstream fileIn;
    int stringSize = 0;
    int i = 0;
    int consCount = 0;
    char ch;
    cout<<"Enter name of file of characters :";
        cin>>inputFileName;
    fileIn.open(inputFileName.data());
    assert(fileIn.is_open() );
    i=0;
    while (!(fileIn.eof()))
      {ch=fileIn.get();
         string1.insert(i,1,ch);     //insert character at position i
         i++;
      }

    /*All further code written by Christopher Muench
    October 2016
    C++ (G++)*/

    i=0; //set incrementer back to 0
    stringSize = string1.length(); //assign string size to variable to loop on
    cout <<endl<<"Size of string is: "<<stringSize<<" characters.";
    for (i = 0; i < stringSize; i++)
      {
        string1[i] = tolower(string1[i]); //cast all characters to lowercase
        switch (string1[i]) //enter switch statement to increment count
          {
              case 'b': consCount++;
              break;
              case 'c': consCount++;
              break;
              case 'd': consCount++;
              break;
              case 'f': consCount++;
              break;
              case 'g': consCount++;
              break;
              case 'h': consCount++;
              break;
              case 'j': consCount++;
              break;
              case 'k': consCount++;
              break;
              case 'l': consCount++;
              break;
              case 'm': consCount++;
              break;
              case 'n': consCount++;
              break;
              case 'p': consCount++;
              break;
              case 'q': consCount++;
              break;
              case 'r': consCount++;
              break;
              case 's': consCount++;
              break;
              case 't': consCount++;
              break;
              case 'v': consCount++;
              break;
              case 'w': consCount++;
              break;
              case 'x': consCount++;
              break;
              case 'y': consCount++;
              break;
              case 'z': consCount++;
              break;
          }

      }
    cout <<endl<<"Amount of consonants in file: "<<consCount;//display # cons
return 0;
}
