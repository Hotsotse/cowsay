/* 
 * File:   main.cpp
 * Author: markus
 *
 * Created on May 28, 2015, 4:50 PM
 */
#include <iostream>
#include <string>

using namespace std;

string underscore_length(string var)
{
        string start = " _";
        string add = "_"; // for ajusting lenth of bubble roof
        for (int i = 0; i <= var.size(); i++)
        {
                start = start + add;
        }
        return start;
}

string hyphen_length(string var)
{
	string start("  -");
	string add("-");
	for (int i = 0; i <= var.size(); i++)
	{
		start = start + add;
	}
	return start;
}
 
void  cowsay(string var)
{
        char star = '*';
        cout << " "<<underscore_length(var) << endl;
        cout << " < " << var << " >" << endl; //our var
		cout << hyphen_length(var) << endl;
        cout << "  " << "\n"
                "         \\   ^__^\n" //double slashes to tell gcc that we're not running wizardy commands or anythin'
                "          \\  (oo)\\_______\n"
                "             (__)\\       )\\/\\\n"
                "               ||----w |\n"
                "               ||     ||\n" << endl;
}

int main()
{	
	string var;
	getline(cin, var);
    cowsay(var);
 	return 0;
}
