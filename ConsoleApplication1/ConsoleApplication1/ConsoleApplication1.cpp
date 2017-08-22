// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	string adr= "E:\\Users\\alice.txt";
	string str, tmp;
	vector<string> vec;
	int k;
	k = 0;
	if (argc >= 2)// если есть адрес и параметр
	{
		
		adr = argv[1];
		

			ifstream fin(adr);
			while (fin >> tmp)
			{
				vec.push_back(tmp);
			}

			int  min = vec[0].size();
			for (int i = 2; i < argc; i++) //для каждого слова. название и адрес файла пропускаем, начинаем поиск параметров с 2
			{
				string str(argv[i]);
				for (size_t l = 0; l != vec.size(); l++)
				{
					if (str==vec[l]) //одинаковы ли
					{
						//cout << argv[i] << "  " << vec[l]<<endl;
						k++;
					}	
					
				}
				cout << argv[i] << " found " << k << " times";
				k = 0;
			}
				fin.close(); // закрываем файл
			
			

	}
	system("pause");
	return 0;
}

