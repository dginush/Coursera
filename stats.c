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

void sort_array(unsigned char *test, unsigned int size) { //from pc
    unsigned char tmp;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - (i + 1); ++j) {
            if (test[j] < test[j + 1]) {
                tmp = test[j];
                test[j] = test[j + 1];
                test[j + 1] = tmp;
            }
        }
    }
}

void print_array(unsigned char *test, unsigned int size) {
    printf("\n============================================================");
    for (int i = 0; i < size; ++i) {
        if (i % 8 == 0) printf("\n"); // eight element per line
        printf("%d\t", test[i]);
    }
    printf("\n============================================================\n\n");
}

void print_statistics(unsigned char *test, unsigned int size) {
    unsigned char min = find_minimum(test, size);
    unsigned char max = find_maximum(test);
    unsigned char mean = find_mean(test, size);
    unsigned char median = find_median(test, size);
    printf("Statistics for the given array:\nMinimum\t=\t%d\nMaximum\t=\t%d\nMean\t=\t%d\nMedian\t=\t%d\n", min, max,
           mean, median);
}

unsigned char find_minimum(unsigned char *t, unsigned int size) {
    return t[size - 1];
}

unsigned char find_maximum(unsigned char *t) {
    return t[0];
}

unsigned char find_mean(unsigned char *t, unsigned int size) {
    unsigned int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += t[i];
    }
    return (unsigned char) (sum / size);
}

unsigned char find_median(unsigned char *t, unsigned int size) {
    if (size % 2 != 0)
        return t[size / 2];
    unsigned char med = (unsigned char) ((t[(size - 1) / 2] + t[size / 2]) / 2);
    return med;
}

//end
