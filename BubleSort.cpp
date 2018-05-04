/*
****************************************************************************
*                        FCI – Programming 2 – 2018                        *
** Project Name: BenchMarking tool Library                                 *
** Last Modification Date: 15/04/2018                                      *
** Author: Mahmoud Ahmed Tawfik                                            *
****************************************************************************
*/
#include "BubleSort.h"



/*Constructors*/
BubleSort::BubleSort(){}


/*Methods*/
void BubleSort::swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void BubleSort::bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)      
 
		// Last i elements are already in place   
		for (j = 0; j < n-i-1; j++) 
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}
double BubleSort::getTime()
{
	endTime =  clock();
	double elapsed = (double)(endTime - startTime) * 1000.0 / CLOCKS_PER_SEC;    
	return elapsed ;
}


