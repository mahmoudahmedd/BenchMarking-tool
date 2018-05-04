/*
****************************************************************************
*                        FCI – Programming 2 – 2018                        *
** Project Name: BenchMarking tool Library                                 *
** Last Modification Date: 15/04/2018                                      *
** Author: Mahmoud Ahmed Tawfik                                            *
****************************************************************************
*/
#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include "BenchMarking.h"

using namespace std ;

class MergeSort:public BenchMarking
{
public:

	/*Constructors*/
    MergeSort();
	
	/*Methods*/
    void merge(int arr[], int l, int m, int r);
    void mergeSort(int arr[], int l, int r);
	double getTime();

 };

#endif // MERGESORT_H_INCLUDED


