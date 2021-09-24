#include <iostream> 
#include <bits/stdc++.h>
#include <stack>
/* fstream header file for ifstream, ofstream, 
fstream classes */
#include <fstream> 

using namespace std; 


// Driver Code 
int main() 
{   
    //vector<string> vs;
    int comments = 0, comma = 0, space = 0, lines = 0;
	int semicolon = 0, blankLines = 0; 

	// Creation of fstream class object 
	fstream fio; 

	string line; 

	fio.open("inp.txt", ios::app | ios::out | ios::in); 

	// Execute a loop untill EOF (End of File) 
	// point read pointer at beginning of file 
	fio.seekg(0, ios::beg); 

	while (fio)
	{
		//Read a Line from File 
		getline(fio, line);
		int flag = 0;

		for(int i = 0; i < (int)line.length()-1; i++)
		{
			if(line[i] == '/' && line[i+1] == '/')
				comments++;

			if(line[i]  == '/' && line[i+1]  == '*')
				comments++;
			
			if(line[i]  == ' ')
				space++;

			if(line[i]  == ',')
				comma++;

			if(line[i]  == ';' || (i == (int)line.length() - 2 && line[i+1] == ';'))
				semicolon++;

			if(line[i] != ' ')
				flag = 1;
		}
		
		if(flag==1)
			lines++;
		else
			blankLines++;	
	}

	// Close the file 
	fio.close(); 

	cout<<"Lines :"<<lines<<endl;
	cout<<"Blank Lines :"<<blankLines<<endl;
	cout<<"Spaces :"<<space<<endl; 
	cout<<"Semicolons :"<<semicolon<<endl; 
	cout<<"Comments :"<<comments<<endl; 
	cout<<"Commas :"<<comma<<endl; 
		
	return 0; 
}