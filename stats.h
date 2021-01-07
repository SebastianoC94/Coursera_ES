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
 * @brief calculate statistics of an array
 *
 *
 * @author Sebastiano Costanzo
 * @date 07/01/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print each element of the array separated with a space
 *
 * This functions takes an pointer to an unsigned char array and
 * its size. It prints each element on the console output
 *
 * @param array a pointer to the first element of the array
 * @param length size of the array
 *
 * @return none
 */
void print_array(unsigned char* array, unsigned int length);

/**
 * @brief Sort an array with the selection sort technique. 
 * 	  First element is the biggest, last is the smallest
 *
 * This functions takes an pointer to an unsigned char array and
 * its size. It sorts the array
 *
 * @param array a pointer to the first element of the array
 * @param length size of the array
 *
 * @return none
 */
void sort_array(unsigned char* array, unsigned int length);

/**
 * @brief Print the: min, max, mean and median of a sorted array
 *
 * This functions takes an pointer to an unsigned char array and
 * its size. It prints the array statistics
 *
 * @param array a pointer to the first element of the array
 * @param length size of the array
 *
 * @return none
 */
void print_statistics(unsigned char* array, unsigned int length);

/**
 * @brief Find the minimum element inside an array
 *
 * This functions takes an pointer to an unsigned char array and
 * its size. It returns the minimum element
 *
 * @param array a pointer to the first element of the array
 * @param length size of the array
 *
 * @return The minimum element of the array
 */
unsigned char find_median(unsigned char* array, unsigned int length);

/**
 * @brief Find the median element of a sorted array
 *
 * This functions takes an pointer to an unsigned char array and
 * its size. It returns the median element
 *
 * @param array a pointer to the first element of the array
 * @param length size of the array
 *
 * @return The median element of the array
 */
float find_mean(unsigned char* array, unsigned int length);

/**
 * @brief Find the maximum element of a sorted array
 *
 * This functions takes an pointer to an unsigned char array and
 * its size. It returns the maximum element
 *
 * @param array a pointer to the first element of the array
 * @param length size of the array
 *
 * @return The maximum element of the array
 */
unsigned char find_maximum(unsigned char* array, unsigned int length);

/**
 * @brief Find the minimum element of a sorted array
 *
 * This functions takes an pointer to an unsigned char array and
 * its size. It returns the minimum element
 *
 * @param array a pointer to the first element of the array
 * @param length size of the array
 *
 * @return The minimum element of the array
 */
unsigned char find_minimum(unsigned char* array, unsigned int length);

#endif /* __STATS_H__ */
