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
 * @file stats.h 
 * @brief function APIs for calculating maximum, minimum, mean, and median of the data set. 
 * Also reorder this data set from large to small.
 *
 * <Add Extended Description Here>
 *
 * @author Arbab Haider
 * @date 02/04/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief A function that prints the statistics of an array including minimum, maximum, 
 * mean, and median.
 * @param array given to the function and length
 * @return None
 */
void print_statistics(unsigned char data[], int N);


/**
 * @brief  Given an array of data and a length, prints the array to the screen.
 * @param array given to the function and length
 * @return None
 */
void print_array(unsigned char data[], int N);


/**
 * @brief Given an array of data and a length, returns the median value
 * @param array given to the function and length
 * @return middle element from the given array
 */
unsigned char find_median(unsigned char data[], int N);


/**
 * @brief Given an array of data and a length, returns the mean
 * @param array given to the function and length
 * @return average of the given array
 */
unsigned char find_mean(unsigned char data[], int N); 


/**
 * @brief Given an array of data and a length, returns the maximum
 * @param array given to the function and length
 * @return largest element from the given array
 */
unsigned char find_maximum(unsigned char data[], int N);


/**
 * @brief Given an array of data and a length, returns the minimum
 * @param array given to the function and length
 * @return smallest element from the given array
 */
unsigned char find_minimum(unsigned char data[], int N);


/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 * @param array given to the function and length
 * @return array in reverse order
 */
void sort_array(unsigned char data[], int N);


#endif /* __STATS_H__ */
