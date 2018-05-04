/*
****************************************************************************
*                        FCI – Programming 2 – 2018                        *
** Project Name: BenchMarking tool Library                                 *
** Last Modification Date: 15/04/2018                                      *
** Author: Mahmoud Ahmed Tawfik                                            *
****************************************************************************
*/

#include "QuickSort.h"



/*Constructors*/
QuickSort::QuickSort(){}

/*Methods*/
int QuickSort::partition (int arr[] , int low , int high)
{
	int pivot = arr[high];    // pivot
	int i = (low - 1);  // Index of smaller element
 
	for (int j = low; j <= high- 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
	
void QuickSort::quickSort(int arr[] , int low , int high )
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
			at right place */
		int pi = partition(arr, low, high);
 
		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
double QuickSort::getTime()
{
	endTime =  clock();
	double elapsed = (double)(endTime - startTime) * 1000.0 / CLOCKS_PER_SEC;    
	return elapsed ;
}