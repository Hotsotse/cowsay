/* 
 * File:   main.cpp
 * Author: markus
 *
 * Created on May 28, 2015, 4:50 PM
 */
#include <iostream>
#include <string>

using namespace std;

string(int t = var.len, char c);

void  cowsay(string var)
{
char star = '*';
string hyphen(var, star);
cout << "  ____" << endl;
cout << " < " << var << " >" << endl; //our var
cout << "  " << hyphen << "\n"
"         \\   ^__^\n" //double slashes to tell gcc that we're not running wizardy commands or anythin'
"          \\  (oo)\\_______\n"
"             (__)\\       )\\/\\\n"
"        	||----w |\n"
"           	||     ||\n" << endl;
}

int main()
{	
	string var;
	cin >> var;
    cowsay(var);
 	return 0;
}
