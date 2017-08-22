// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	string adr= "E:\\Users\\ddd.txt";
	char buff[50];
	int i;
	int k = 0;
	if (argc >= 2)// если есть адрес и параметр
	{
		
		adr = argv[1];
		
		try {

			 
			for (int i = 2; i < argc; i++) //для каждого слова. название и адрес файла пропускаем, начинаем поиск параметров с 2
				{
				ifstream fin(adr);// открыли файл для чтения
				fin >> buff;
				while(!fin.eof()); //пока считываем
				{
					if (argv[i] == buff); //одинаковы ли
					{
						k++;
					}
					fin >> buff;
				}
				cout << argv[i] << " найдено " << k << " раз";
				k == 0;
				fin.close(); // закрываем файл
			}
			
			
		}
		catch (int)
		{

		}
	}
	system("pause");
	return 0;
}

