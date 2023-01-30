// C++ program to convert string
// to char array Using for loop
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// driver code
int main()
{
       // // assigning value to string s
       // std::string s = "Geeks For Geeks";

       // // create a new array of chars to copy to (+1 for a null terminator)
       // char* char_array = new char[s.length() + 1];

       // // make sure that the new string is null terminated
       // char_array[s.length()] = '\0';

       // for (int i = 0; i < s.length(); i++) {
       // 	char_array[i] = s[i];
       // }

       // std::cout << char_array;

       // delete[] char_array;
       char s[1000] = {'\0'};

       std::cout << "Input: ";
       std::cin.getline(s, 1000);
       std::cout << s << std::endl;

       return 0;
}
