#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void csv() {
	string file;
	
	ifstream filetxt;
	filetxt.open("daftar-nama.txt");
	
	ofstream file_temp;
	file_temp.open("4210191029_DimasRizky.csv");
		
	string blank = " ";
	int index = 0;
	string saveFile[29];
	
	if(filetxt.is_open())
	{
		while(getline(filetxt, file))
		{			
			saveFile[index] = file;		
			index++;			
		}		
		filetxt.close();		
		index = 0;
		
		while(index != 29)
		{
			file_temp << saveFile[index] << endl;
			index++;
		}
		
		file_temp.close();
		cout << "File csv telah dibuat" << endl << endl;
	}
	else
	
		cout << "File csv belum dibuat" << endl;
	
	
	file_temp.open("4210191029_DimasRizky.csv");
	index = 28;
	
	if(file_temp.is_open())
	{
		while(index != 1)
		{
			file_temp << saveFile[index] << endl;
			index--;
		}
		cout << "File cvs telah di reverse" <<endl;
	}
	else
		cout << "File csv belum di reverse" <<endl;
		
	file_temp.close();
}

int main()
{
	csv();
	return 0;
}
