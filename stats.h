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
 * @brief A program to manipulate and search through a given array
 *
 * This program prints the statistics of a given array (Min, Max, Median & Mean),
 * Sorts its elements (from largest to smallest) and prints the array.
 *
 * @author Dudi Tedgy
 * @date June 9, 2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics for an array: Min, Max, Median, Mean
 *
 * This function takes an unsigned char pointer to an n-elements data array and
 * an unsigned integer as the size of the array and prints its statistics
 *
 * @param An unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 *
 * @return None
 */
void print_statistics(unsigned char *, unsigned int);

/**
 * @brief Prints the elements for an array
 *
 * This function takes an unsigned char pointer to an n-elements data array and
 * an unsigned integer as the size of the array and prints its elements
 *
 * @param An unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 *
 * @return None
 */
void print_array(unsigned char *, unsigned int);

/**
 * @brief Prints the Median of an array
 *
 * This function takes an unsigned char pointer to an n-elements data array and
 * an unsigned integer as the size of the array and returns its median
 *
 * @param An unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 *
 * @return An unsigned char as the Median of the array
 */
unsigned char find_median(unsigned char *, unsigned int);

/**
 * @brief Prints the Mean of an array
 *
 * This function takes an unsigned char pointer to an n-elements data array and
 * an unsigned integer as the size of the array and returns its Mean
 *
 * @param An unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 *
 * @return An unsigned char as the Mean of the array
 */
unsigned char find_mean(unsigned char *, unsigned int);

/**
 * @brief Prints the Maximum of an array
 *
 * This function takes an unsigned char pointer to an n-elements data array
 * and returns its Maximum
 *
 * @param An unsigned char pointer to an n-element data array
 *
 * @return An unsigned char as the Maximum of the array
 */
unsigned char find_maximum(unsigned char *);

/**
 * @brief Prints the Minimum of an array
 *
 * This function takes an unsigned char pointer to an n-elements data array and
 * an unsigned integer as the size of the array and returns its Minimum
 *
 * @param An unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 *
 * @return An unsigned char as the Minimum of the array
 */
unsigned char find_minimum(unsigned char *, unsigned int);

/**
 * @brief Sorts the array from the largest number to the smallest one
 *
 * This function takes an unsigned char pointer to an n-elements data array and
 * an unsigned integer as the size of the array and sorts its elements from largest to smallest
 *
 * @param An unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 *
 * @return None
 */
void sort_array(unsigned char *, unsigned int);





#endif /* __STATS_H__ */
