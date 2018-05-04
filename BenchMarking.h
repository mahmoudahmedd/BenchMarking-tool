/*
****************************************************************************
*                        FCI – Programming 2 – 2018                        *
** Project Name: BenchMarking tool Library                                 *
** Last Modification Date: 15/04/2018                                      *
** Author: Mahmoud Ahmed Tawfik                                            *
****************************************************************************
*/

#ifndef BENCHMARKING_H_INCLUDED
#define BENCHMARKING_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

using namespace std ;

class BenchMarking
{
private:
	/*Attributes*/
	string fileName;
	ifstream file;
protected:
	int *arr;
	int sizeOfData;
	clock_t startTime;
	clock_t endTime;
public:

	/*Constructors*/
    BenchMarking();
    

	/*Methods*/
    void set(string _fileName);
    void loadData();
	int getSizeOfData();
	int getSize();
	int *getArr();

	void swap(int* a, int* b);

	virtual void  bubbleSort(int arr[], int n){}
	virtual void quickSort(int arr[] , int low , int high ){}
	virtual void mergeSort(int arr[], int l, int r){}
	virtual int partition (int arr[] , int low , int high){return 0;}
	virtual double getTime(){return 0;}


	/*Destructor*/
    ~BenchMarking();
 };

#endif // BENCHMARKING_H_INCLUDED


