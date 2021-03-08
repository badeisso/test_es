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
 * @file static.c
 * @brief This is final commit
 *
 *
 * @author Badei Ayasso
 * @date March,8,2021
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stats.h"
#define SIZE 40


void main ()
{
     int int_test[SIZE];
     int n = 0;
     unsigned int *sorted;
     unsigned char test[SIZE] = {34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
    for (int i = 0 ; i < strlen(test) ; i++)
    {
        int_test[i] = test[i];
    }


    print_array(test,SIZE);
    print_statistics(test,SIZE);
    sorted = sort_array(int_test,SIZE);
    for (int i = 0 ; i < SIZE ; i++)
    {
        printf("%d\t",*(sorted + i));
    }

}
int find_maximum (unsigned char val[],int length)
{
    int temp = val[0];
    for ( int i = 1 ; i < length ; i++ )
    {
        if ( val[i] > temp)
        {
            temp = val[i];
        }
    }
    return temp;
}
int find_minimum (unsigned char val[],int length)
{
    int temp = val[0];
    for ( int i = 1 ; i < length ; i++ )
    {
        if (val[i] < temp)
        {
            temp = val[i];
        }
    }
    return temp;
}
int find_mean(unsigned char val[],int length)
{

    int mean = 0, sum = 0;
    for ( int i = 0 ; i < length ; i++)
    {
        sum += val[i];
    }
    mean = sum / length;
    return mean;
}
int find_median(unsigned char val[],int length)
{
    float median = 0.0;
    if (length % 2 == 0)
    {
        int j = ((length / 2)-1);
        median = (val[j]+val[length/2])/2;
    }
    else
    {
        int j = ((length / 2));
        median = val[j];
    }
    return median;
}
void print_statistics(unsigned char val[],int length)
{
    printf("the maximum is : %d\n",find_maximum(val,length));
    printf("the minimum is : %d\n",find_minimum(val,length));
    printf("the mean is : %d\n",find_mean(val,length));
    printf("the median is : %d\n",find_median(val,length));
}
void print_array(unsigned char val[],int length)
{
    for (int i = 0 ; i < length ; i++)
    {
        printf("%d\t",val[i]);
    }
    printf("\n");
}
 int *sort_array(unsigned int val[],int length)
{
    int temp = 0;

    for (int i = 0 ; i < length ; i++)
    {
        for (int j = i+1 ; j < length ; j++)
        {
            if (val[j] >= val[i])
            {
                temp = val[i];
                val[i] = val[j];
                val[j] = temp;
            }

        }
    }
    return val;
}
