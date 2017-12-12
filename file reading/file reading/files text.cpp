#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main ()
{

	string string;
	ifstream infile;

	infile.open ("file.dat");

        while(!infile.eof () )
        {
	        getline(infile,string); 
	        cout << string; 
        }

	infile.close();
	system ("pause");
	return 0;
}

// Now from there, this program will read and  out put the number of words within that file. 

