/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Statistics and Analysis of Array data
 *
 * Print the statistics and analysis of Array data
 *
 * @author Arbab Haider
 * @date 02/04/2023
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char data[], int N)
{
	unsigned char maxVal  = find_maximum(data, N);	
	unsigned char minVal  = find_minimum(data, N);
  	unsigned char avg 	= find_mean(data, N);
  	unsigned char medVal  = find_median(data, N);
  	printf("The maximum element in the given array is: %d\r\n",maxVal);
  	printf("The minimum element in the given array is: %d\r\n",minVal);
  	printf("The mean of the given array is: %d\r\n",avg);
  	printf("The median of the given array is: %d\r\n",medVal);
}

void print_array(unsigned char data[], int N)
{
	
	int i;
	printf("The given array is: \r\n");
	for (i = 0; i < N; i++) 
	{
		printf("%d ", data[i]);
	}
	printf("\r\n");
}

unsigned char find_median(unsigned char data[], int N) 
{
	int i, j, temp;
    	for (i = 0; i < N - 1; i++) 
    	{
        	for (j = 0; j < N - i - 1; j++) 
        	{
            		if (data[j] > data[j + 1]) 
            		{
                		temp = data[j];
                		data[j] = data[j + 1];
                		data[j + 1] = temp;
            		}
        	}
    	}
	
    	if (N % 2 != 0) 
    	{
        	return data[N/2];
    	} 
    	
    	else 
    	{
        	return (data[(N-1)/2] + data[N/2]) / 2.0;
    	}
}

unsigned char find_mean(unsigned char data[], int N) 
{
	int i;
	unsigned int sum = 0;
	
	for (i=0; i < N; i++)
	{
		sum += data[i];
	}
	return (unsigned char) (sum / N);
}

unsigned char find_maximum(unsigned char data[], int N) 
{
	int i;
	unsigned char maxTmp = data[0];
	for (i=0; i < N; i++)
	{
		if (data[i] > maxTmp)
			maxTmp = data[i];
	}
	return maxTmp;
}

unsigned char find_minimum(unsigned char data[], int N) 
{
	int i;
	unsigned char minTmp = data[0];
	for (i=0; i < N; i++)
	{
		if (data[i] < minTmp)
			minTmp = data[i];
	}
	return minTmp;
}

void sort_array(unsigned char data[], int N) 
{
	int i, j, temp;
    	for (i = 0; i < N - 1; i++) 
    	{
        	for (j = 0; j < N - i - 1; j++) 
        	{
            		if (data[j] < data[j + 1]) 
            		{
                		temp = data[j];
                		data[j] = data[j + 1];
                		data[j + 1] = temp;
            		}
        	}
    	}
}

