// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	if (argc >= 2)// ���� ���� ����� � ��������
	{
		
		adr = argv[1];
		
		try {

			 
			for (int i = 2; i < argc; i++) //��� ������� �����. �������� � ����� ����� ����������, �������� ����� ���������� � 2
				{
				ifstream fin(adr);// ������� ���� ��� ������
				fin >> buff;
				while(!fin.eof()); //���� ���������
				{
					if (argv[i] == buff); //��������� ��
					{
						k++;
					}
					fin >> buff;
				}
				cout << argv[i] << " ������� " << k << " ���";
				k == 0;
				fin.close(); // ��������� ����
			}
			
			
		}
		catch (int)
		{

		}
	}
	system("pause");
	return 0;
}

