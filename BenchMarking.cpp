/*
****************************************************************************
*                        FCI – Programming 2 – 2018                        *
** Project Name: BenchMarking tool Library                                 *
** Last Modification Date: 15/04/2018                                      *
** Author: Mahmoud Ahmed Tawfik                                            *
****************************************************************************
*/
#include "BenchMarking.h"

/*Constructors*/
BenchMarking::BenchMarking(){}


/*Methods*/

void BenchMarking::set(string _fileName)
{
	fileName = _fileName;
	if(fileName.find(".dat") == string::npos)
		fileName.append(".dat");
	file.open(fileName, ios::in);
	sizeOfData = getSizeOfData();
	arr = new int[sizeOfData];
	loadData();
	startTime = clock();
}

void BenchMarking::loadData()
{
	int temp;
	if(!file.is_open())
	{
		cout<<"BenchMarking::loadData() ERROR: " << fileName << " not found!"<<endl;
		return ;
	}
	cout<<"Please wait a moment while i get data from file("<<fileName<<")"<<endl;
		
	for(int i = 0;file>>temp;i++)
		arr[i] = temp;

	cout<<"Done!"<<endl;
}
int BenchMarking::getSizeOfData()
{
	if(!file.is_open())
	{
		cout<<"BenchMarking::getSizeOfData() ERROR: " << fileName << " not found!"<<endl;
		return 0;
	}
	int _size = 0;
	int temp;
	cout<<"Please wait a moment while i get size of data from file("<<fileName<<")"<<endl;

	while(file>>temp)
		_size++;

	cout<<"Done!"<<endl;
	file.clear();
	file.seekg(0, ios::beg); 

	return _size;
}
int BenchMarking::getSize()
{
	return sizeOfData;
}
int *BenchMarking::getArr()
{
	return arr;
}

void BenchMarking::swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}



/*Destructor*/
BenchMarking::~BenchMarking()
{
	delete[] arr;
	file.close();
}
