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
 * @file stats.c
 * @brief C File of Stat Functions
 *
 * Includes the implentations of the functions from the header file.
 * The main function has the test array and the print_statistics function 
 * to print out all the facts of the array and the sorted array as well. 
 *
 * @author Isaac Fenta
 * @date December 5, 2019
 *
 */



#include <stdio.h>
#include <stdbool.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

	print_statistics(test, SIZE);
}


void print_statistics(unsigned char* data, unsigned int len){
	printf("Mean of array: %d\n", 			find_mean(data, len));
	printf("Median of array: %d\n",		find_median(data, len));
	printf("Maximum of array: %d\n",	find_maximum(data, len)); 
	printf("Minimum of array: %d\n", 	find_minimum(data, len));
	print_array(data, len);
}

void print_array(unsigned char* data, unsigned int len){
	sort_array(data, len);
	unsigned int i;
	printf("[");
	for(i=0; i<len; i++){
		if(i==len-1) printf("%d]\n", data[i]);	//close bracket on last number
		else printf("%d,", data[i]);
	}

}

unsigned int find_median(unsigned char* data, unsigned int len){
	unsigned int median;
	sort_array(data, len);
	/* If the length of the array is odd, median is the middle number in the sorted array */
	if(len%2==1) median=data[len/2];
	/* Else if the length of the array is even, median is the mean of the middle two numbers in sorted array */
	else median=(data[len/2]+data[len/2-1])/2;
	
	return median;
}

unsigned int find_mean(unsigned char* data, unsigned int len){
	unsigned int i;
	unsigned int mean=0;
	for(i=0; i<len; i++){
		mean+=data[i];
	}
	
	return (mean/len);
}

unsigned int find_maximum(unsigned char* data, unsigned int len){
	sort_array(data, len);
	return data[0];
}

unsigned int find_minimum(unsigned char* data, unsigned int len){
	sort_array(data, len);
	return data[len-1];
}

void sort_array(unsigned char* data, unsigned int len){
	bool finished = false;
	while(!finished){
		finished = true;
		unsigned int i;
		for(i=0; i<(len-1); i++){
			if(data[i] < data[i+1]){
				unsigned int temp = data[i];
				data[i] = data[i+1];
				data[i+1] = temp;
				finished = false;
			}
		}
	}
}
