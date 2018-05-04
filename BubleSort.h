/*
****************************************************************************
*                        FCI – Programming 2 – 2018                        *
** Project Name: BenchMarking tool Library                                 *
** Last Modification Date: 15/04/2018                                      *
** Author: Mahmoud Ahmed Tawfik                                            *
****************************************************************************
*/
#ifndef BUBLESORT_H_INCLUDED
#define BUBLESORT_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include "BenchMarking.h"

using namespace std ;

class BubleSort:public BenchMarking
{
public:

	/*Constructors*/
    BubleSort();
	
	/*Methods*/
    void swap(int *xp, int *yp);
    void bubbleSort(int arr[], int n);
	double getTime();

 };

#endif // BUBLESORT_H_INCLUDED


