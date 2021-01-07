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
 * @brief calculate statistics of an array
 *
 *
 * @author Sebastiano Costanzo
 * @date 07/01/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

	unsigned char test[SIZE] = {	34, 201, 190, 154,   8, 194,   2,   6,
                              	114, 88,   45,  76, 123,  87,  25,  23,
                              	200, 122, 150, 90,   92,  87, 177, 244,
                              	201,   6,  12,  60,   8,   2,   5,  67,
                                	7,  87, 250, 230,  99,   3, 100,  90};

	
	/* Other Variable Declarations Go Here */
	/* Statistics and Printing Functions Go Here */
	sort_array(test, SIZE);
	print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */
void sort_array(unsigned char* array, unsigned int length) //Simple selection sort MAX = FIRST
{
	if(length <= 0)
	{
		printf("Error: Length = 0\n");
		return;
	}
	if(array==NULL)
	{
		printf("Error: NULL array\n");
		return;
	}
	
	unsigned char max;
	unsigned int j = 0;
	unsigned char temp;
	for(int i=0; i<length; i++)
	{
		max = i;
		for(j = i+1 ; j < length; j++)
		{
			if(array[j] > array[max])
			{
				max = j;
			}
		}
		temp = array[max];
		array[max] = array[i];
		array[i] = temp;	
	}
}

void print_array(unsigned char* array, unsigned int length)
{
	if(length <= 0)
	{
		printf("Error: Length = 0\n");
		return;
	}
	if(array==NULL)
	{
		printf("Error: NULL array\n");
		return;
	}
	
	for(int i=0; i<length;)
	{
		printf("%d ", array[i++]);
	}
	printf("\n");		
}

void print_statistics(unsigned char* array, unsigned int length)
{
	find_minimum(array, length);
	find_maximum(array, length);
	find_mean(array, length);
	find_median(array, length);
}

unsigned char find_median(unsigned char* array, unsigned int length)
{
	unsigned char median;
	if(length%2!=0) //Array length is odd
	{
		median = array[(length+1)/2];
	}
	else
	{
		median = array[length/2];
	}
	printf("MEDIAN = %d\n", median);
	return median;
}

unsigned char find_minimum(unsigned char* array, unsigned int length)
{
	printf("MIN = %d\n", array[length-1]);
	return array[length-1];
}

unsigned char find_maximum(unsigned char* array, unsigned int length)
{
	printf("MAX = %d\n", array[0]);
	return array[0];
}

float find_mean(unsigned char* array, unsigned int length)
{
	float mean = 0;
	for(int i=0; i < length; i++)
	{
		mean+=array[i];
	}
	mean = mean / length;
	printf("MEAN = %f\n", mean);
	return mean;
}




