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
 * @brief A program to manipulate and search through a given array
 *
 * This program prints the statistics of a given array (Min, Max, Median & Mean),
 * Sorts its elements (from largest to smallest) and prints the array.
 *
 * @author Dudi Tedgy
 * @date June 9, 2017
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};

    /* prints the unsorted array */
    printf("Unsorted array:\n");
    print_array(test, SIZE);

    /* sorts the array */
    sort_array(test, SIZE);

    /* prints the sorted array */
    printf("Sorted array:\n");
    print_array(test, SIZE);

    /* prints the statistics of the array - Min, Max, Median & Mean */
    print_statistics(test, SIZE);
}

void sort_array(unsigned char *test, unsigned int size) {

}

void print_array(unsigned char *test, unsigned int size) {

}

void print_statistics(unsigned char *test, unsigned int size) {

}

unsigned char find_minimum(unsigned char *t, unsigned int size) {

}

unsigned char find_maximum(unsigned char *t) {

}

unsigned char find_mean(unsigned char *t, unsigned int size) {

}

unsigned char find_median(unsigned char *t, unsigned int size) {
    
}

