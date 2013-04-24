#include <iostream>
#include <conio.h>
#include "ctimer.hpp"
#include <vector>
#include <fstream>
/*
# Mehmet Dursun INCE 26.03.2013 
#
# Using bubble sort algorithm in huge data stack.
*/
using namespace std;

class InsertionSortFromFile
{
	public:		
			const char *filepath; // Dosyanin dizini
			ifstream fi; // Datalarin okunacagi dosyanin streami			
			int temp; // Dosyadan okunan degeler gecici olarak burada tutulacak.
			vector<int> numbers; // Dosyadan gelen datalarin tutuldugu vector
			vector<int>::iterator p; // vektor uzerinde iterasyon yapabilmek gerekli pointer
			InsertionSortFromFile(const char *); // Kurucu fonksiyon
			~InsertionSortFromFile();
			bool readFromFile(); // Dosyadan deger okuyup vector'e add yapan function
			void printNumbers(); // Vectorde ki sayilari ekrana yazan function
			void insertionSort(); // Bubble sort algoritmasini vector uzerinde kostur!
			void printFirstTenNumber(); // ilk 10 sayiyi yazdir
			void printLastTenNumber(); // Son 10 sayiyi yazdir			
};
InsertionSortFromFile::InsertionSortFromFile(const char *file)
{
	filepath=file;
	this->readFromFile();
}
bool InsertionSortFromFile::readFromFile(){		
	fi.open(filepath);
	if(!fi.is_open()) return 0;
	while(fi >> temp)
	{
		numbers.push_back(temp);
	}
	return 1;
}
void InsertionSortFromFile::printNumbers()
{	
	p=numbers.begin();
	while(p!=numbers.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout << endl;
}

void InsertionSortFromFile::insertionSort()
{
      int i, j, tmp;
      for (i = 1; i < numbers.size(); i++) {
            j = i;
            while (j > 0 && numbers[j - 1] > numbers[j]) {
                  tmp = numbers[j];
                  numbers[j] = numbers[j - 1];
                  numbers[j - 1] = tmp;
                  j--;
            }
      }	
}
void InsertionSortFromFile::printFirstTenNumber()
{
	cout << "Frist 10 Number : ";
	for(int i=0; i < 10;i++)
		cout << numbers[i] << " ";
	cout << endl;
}
void InsertionSortFromFile::printLastTenNumber()
{
	cout << "Last 10 Number : ";
	for(int i=0; i < 10;i++)
		cout << numbers[numbers.size()-1-i] << " ";
	cout << endl;
}
InsertionSortFromFile::~InsertionSortFromFile()
{
	numbers.erase(numbers.begin(), numbers.end());
}
int main(int argc, char **argv)
{
	CTimer timer; double timeresult;const char * source;
	ofstream of("results.txt",ios::app);
	timer.Reset();
	// 1k number
	source = "../../1k.lst";
	InsertionSortFromFile _1k(source);
	timer.Start();	
	_1k.insertionSort();
	timer.Stop();	
	timeresult = timer.ElapsedTime();	
	of << "1k = " << timeresult << endl;
	timer.Reset();
	// 10k number
	source = "../../10k.lst";
	InsertionSortFromFile _10k(source);
	timer.Start(); 
	_10k.insertionSort();
	timer.Stop(); 
	timeresult = timer.ElapsedTime();
	of << "10k = " << timeresult << endl;	
	timer.Reset();
	// 100k number
	source = "../../100k.lst";
	InsertionSortFromFile _100k(source);
	timer.Start(); 
	_100k.insertionSort();
	timer.Stop(); 
	timeresult = timer.ElapsedTime();
	of << "100k = " << timeresult << endl;	
	timer.Reset();	
	// 1M number
	source = "../../1m.lst";
	InsertionSortFromFile _1m(source);
	timer.Start(); 
	_1m.insertionSort();
	timer.Stop(); 
	timeresult = timer.ElapsedTime();
	of << "1m = " << timeresult << endl;	
	timer.Reset();		
	// 2M number
	source = "../../2m.lst";
	InsertionSortFromFile _2m(source);
	timer.Start(); 
	_2m.insertionSort();
	timer.Stop(); 
	timeresult = timer.ElapsedTime();
	of << "2m = " << timeresult << endl;	
	timer.Reset();		
	// 4M number
	source = "../../4m.lst";
	InsertionSortFromFile _4m(source);
	timer.Start(); 
	_4m.insertionSort();
	timer.Stop(); 
	timeresult = timer.ElapsedTime();
	of << "4m = " << timeresult << endl;	
	timer.Reset();		
	// 8M number
	source = "../../8m.lst";
	InsertionSortFromFile _8m(source);
	timer.Start(); 
	_8m.insertionSort();
	timer.Stop(); 
	timeresult = timer.ElapsedTime();
	of << "8m = " << timeresult << endl;	
	timer.Reset();		
	// 10M number
	source = "../../10m.lst";
	InsertionSortFromFile _10m(source);
	timer.Start(); 
	_10m.insertionSort();
	timer.Stop(); 
	timeresult = timer.ElapsedTime();
	of << "10m = " << timeresult << endl;	
	timer.Reset();	
	return 0;	
}





















