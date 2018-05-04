/*
****************************************************************************
*                        FCI – Programming 2 – 2018                        *
** Project Name: BenchMarking tool Library                                 *
** Last Modification Date: 15/04/2018                                      *
** Author: Mahmoud Ahmed Tawfik                                            *
****************************************************************************
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include "BenchMarking.h"
#include "BubleSort.h"
#include "QuickSort.h"
#include "MergeSort.h"

using namespace std;
void swap(double *xp, double *yp)
{
	double temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void swap1(string *xp, string *yp)
{
	string temp = *xp;
	*xp = *yp;
	*yp = temp;
}
 
int main()
{
	string a1[3] = {"BubbleSort","QuickSort","MergeSort"};
	double a2[3] = {0,0,0};

	BubleSort  t1;
	QuickSort  t2;
	MergeSort  t3;
	BenchMarking *tool[3] ;

	string fileName;
	cout<<"Enter filename: ";
	cin>>fileName;
	

	tool[0] = &t1;
	tool[0]->set(fileName);
	tool[0]->bubbleSort(tool[0]->getArr(),tool[0]->getSize()); 
	//cout<<tool[0]->getTime()<<endl;
	a2[0] = tool[0]->getTime() ; 

	tool[1] = &t2;
	tool[1]->set(fileName);
	tool[1]->quickSort(tool[1]->getArr(),0,tool[1]->getSize()-1); 
	//cout<<tool[1]->getTime()<<endl;
	a2[1] = tool[1]->getTime() ; 

	tool[2] = &t3;
	tool[2]->set(fileName);
	tool[2]->mergeSort(tool[2]->getArr(),0,tool[2]->getSize()-1); 
	//cout<<tool[2]->getTime()<<endl;
	a2[2] = tool[2]->getTime() ; 

	int i, j;
	for (i = 0; i < 3-1; i++)      
 
		// Last i elements are already in place   
		for (j = 0; j < 3-i-1; j++) 
			if (a2[j] > a2[j+1])
			{
				swap1(&a1[j], &a1[j+1]);
				swap(&a2[j], &a2[j+1]);
			}
    cout<<"-------------------------------"<<endl;
	for(int i = 0;i < 3;i++)
		cout<<"The execution time for "<<a1[i]<<" = "<<a2[i]<<" ms"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"Best algorithm is "<<a1[0]<<endl;
	cout<<"-------------------------------"<<endl;
	return 0;
}
	