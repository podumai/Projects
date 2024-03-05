#pragma once


#include <malloc.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


#ifndef DESCRIPTION_H_
#define DESCRIPTION_H_
void description(void);
#endif


#ifndef FILLING_H_
#define FILLING_H_
void filling(char);
#endif


#ifndef MAXDISCHARGE_H_
#define MAXDISCHARGE_H_
int8_t maxDischarge(int32_t*, int16_t);
#endif


#ifndef INITARRAY_H_
#define INITARRAY_H_
int32_t* initArray(int16_t*);
#endif


#ifndef FILLARRAY_H_
#define FILLARRAY_H_
void fillArray(int32_t*, int16_t);
#endif


#ifndef SWAP_H_
#define SWAP_H_
void swap(int32_t*, int32_t*);
#endif


#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_
void bubbleSort(int32_t*, int16_t);
#endif


#ifndef OUTPUT_H_
#define OUTPUT_H_
void output(int32_t*, int16_t);
#endif