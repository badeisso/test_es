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
 * @brief This file is to be used in the final commit
 *
 * @author Badei Ayasso
 * @date March,8,2021
 *
 */

#ifndef STATS_H_INCLUDED
#define STATS_H_INCLUDED


/**
 * @brief finds the maximum number of the given array
 * 
 * This function takes as an input an unsigned integer array,
 * and the size of this array.
 * 
 * @param unsigned char array,size of the array (40)
 * @return the maximum integer number in the array
 */
 int find_maximum(unsigned char[] ,int);


 /**
 * @brief finds the minimum number of the given array
 * 
 * This function takes as an input an unsigned integer array,
 * and the size of this array.
 * 
 * @param unsigned char array,size of the array (40)
 * @return the minimum integer number in the array
 */
 int find_minimum(unsigned char[] ,int);


 /**
 * @brief finds the mean of the given array
 * 
 * This function takes as an input an unsigned integer array,
 * and the size of this array.
 * adds the elements of array together and divid them
 * by the number of elements.
 * 
 * @param unsigned char array,size of the array (40)
 * @return a float number of the average value of the array's elements.
 */


 int find_mean(unsigned char[] ,int);

 /**
 * @brief finds the value of the corresponding index in the given array
 * 
 * This function takes as an input an unsigned integer array,
 * and the size of this array.
 * if the array has odd number of elements the median is the middle index
 * if the array has even number of elements the median is the summation of
 * the two middle indexs divided by 2.
 * 
 * @param unsigned char array,size of the array (40)
 * @return a float value of the midean
 */


 int find_median(unsigned char[] ,int);

 /**
 * @brief prints the "maximum,minimum,mean,median" values of the given array.
 * 
 * This function takes as an input an unsigned integer array,
 * and the size of this array.
 * 
 * 
 * @param unsigned char array,size of the array (40)
 * @return no return value
 */


void print_statistics(unsigned char [],int);

/**
 * @brief prints the elements of unsorted array.
 * 
 * This function takes as an input an unsigned integer array,
 * and the size of this array.
 * 
 * 
 * @param unsigned char array,size of the array (40)
 * @return no return value
 */

void print_array(unsigned char [],int);

/**
 * @brief sorts the elements of an array from the
 * largest to smallest value
 * 
 * This function takes as an input an unsigned integer array,
 * and the size of this array.
 * It sorts an array by iterating through its elements,
 * and swaping the smaller value with the larger one.
 *
 * 
 * @param unsigned integer array,size of the array (40)
 * @return address of the first element after sorting
 */


 int *sort_array(unsigned int [],int);

#endif // STATS_H_INCLUDED
