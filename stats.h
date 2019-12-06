/******************************************************************************
 * Copyright (C) 2019 by Isaac Fenta
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Isaac Fenta are not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Header File of Stat Functions
 *
 * Holds the main functions to determine different facts about an array.
 * This includes: maximum, minimum, median and mean.
 * There is also a function to sort the array from largest to smallest.
 * Finally, theres a function to print out all the different facts and sorted array. 
 *
 * @author Isaac Fenta
 * @date December 5, 2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print statistics from array
 *
 * Prints out the mean, median, maximum and minimum value of the array. 
 * Then sorts array from largest to smallest and prints that out.
 *
 * @param data - array of data
 * @param len - length of array
 */
void print_statistics(unsigned char* data, unsigned int len);


/**
 * @brief Prints out input array
 *
 * Sorts the array from largest to smallest, and prints the array out
 *
 * @param data - array of data
 * @param len - length of array
 */
void print_array(unsigned char* data, unsigned int len);


/**
 * @brief Finds Median of Array
 *
 * Sorts the array then looks at the total amount of variables in array.
 * If the amount is odd, the median is the middle number.
 * If the amount is even, the median is the average of the two middle numbers. 
 *
 * @param data - array of data
 * @param len - length of array
 *
 * @return median of input array
 */
unsigned int find_median(unsigned char* data, unsigned int len);


/**
 * @brief Finds Mean of Array
 *
 * Sums all the values in the array, and divides by the total length of the array. 
 *
 * @param data - array of data
 * @param len - length of array
 *
 * @return mean of input array
 */
unsigned int find_mean(unsigned char* data, unsigned int len);


/**
 * @brief Finds Maximum Value of Array
 *
 * Sorts the array from largest to smallest, and returns the first value in the array. 
 *
 * @param data - array of data
 * @param len - length of array
 *
 * @return maximum value of array
 */
unsigned int find_maximum(unsigned char* data, unsigned int len);


/**
 * @brief Finds Minumum Value of Array
 *
 * Sorts the array from largest to smallest, and returns the last value in the array. 
 *
 * @param data - array of data
 * @param len - length of array
 *
 * @return minimum value of array
 */
unsigned int find_minimum(unsigned char* data, unsigned int len);


/**
 * @brief Sorts Input Array
 *
 * Uses a bubble sort to sort the array in same array that was provided. 
 *
 * @param data - array of data
 * @param len - length of array
 */
void sort_array(unsigned char* data, unsigned int len);

#endif /* __STATS_H__ */


