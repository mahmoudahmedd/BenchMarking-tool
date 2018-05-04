/*
****************************************************************************
*                        FCI – Programming 2 – 2018                        *
** Project Name: BenchMarking tool Library                                 *
** Last Modification Date: 15/04/2018                                      *
** Author: Mahmoud Ahmed Tawfik                                            *
****************************************************************************
*/

#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include "BenchMarking.h"

using namespace std ;

class QuickSort:public BenchMarking
{
public:

	/*Constructors*/
    QuickSort();
	
	/*Methods*/
    int partition (int arr[] , int low , int high);
    void quickSort(int arr[] , int low , int high );
	double getTime();

 };

#endif // QUICKSORT_H_INCLUDED


