#include "bubblesort.h"


void description(void) {
    printf("******************************BubbleSort******************************\n");
    filling('d');
    printf("This program can sort an integer array with BubbleSort\n");
    filling('d');
}


void filling(char mode) {
    switch (mode) {
    case 's':
        for (int8_t i = 0; i < 70; i++)
            printf("*");
        printf("\n");
        break;
    default:
        for (int8_t i = 0; i < 70; i++)
            printf("-");
        printf("\n");
        break;
    }
}


int8_t maxDischarge(int32_t* array, int16_t size) {
    int32_t maxNum = 0;
    int8_t discharge = 0;

    for (int16_t i = 0; i < size; i++)
        maxNum = maxNum < array[i] ? array[i] : maxNum;

    while (maxNum) {
        maxNum /= 10;
        discharge++;
    }

    return discharge + 1;
}


int32_t* initArray(int16_t* size) {
    int32_t* array = NULL;

    do {
        printf("Enter the size of an array: ");
        scanf("%hd", size);

        if (*size <= 0)
            printf("The size of an array can not be equal to zero or negative\n");
    } while (*size <= 0);

    array = (int32_t*)malloc(sizeof(int32_t) * (*size));

    return array;
}


void fillArray(int32_t* array, int16_t size) {
    filling('d');
    for (int16_t i = 0; i < size; i++) {
        printf("Enter the %hd element: ", i + 1);
        scanf("%d", &array[i]);
    }
    filling('d');
}


void swap(int32_t* num1, int32_t* num2) {
    int32_t ptr = *num1;
    *num1 = *num2;
    *num2 = ptr;
}


void bubbleSort(int32_t* array, int16_t size) {
    char mode;

    getchar();

    do {
        printf("Enter the \"i\" to sort array in increasing order\n");
        printf("Enter the \"d\" to sort array in non-decreasing order\n");
        printf("Enter the mode: ");
        scanf("%c", &mode);
        getchar();

        if (mode != 'i' && mode != 'd') {
            filling('s');
            printf("Invalid mode\n");
            printf("Enter the \"i\" or \"d\"\n");
            filling('s');
        }
    } while (mode != 'i' && mode != 'd');

    if (mode == 'i') {
        for (int16_t i = 0; i < size; i++)
            for (int16_t j = 0; j < size - 1; j++)
                if (array[j] > array[j + 1])
                    swap(&array[j], &array[j + 1]);
    }
    else {
        for (int16_t i = 0; i < size; i++)
            for (int16_t j = 0; j < size - 1; j++)
                if (array[j] < array[j + 1])
                    swap(&array[j], &array[j + 1]);
    }
}


void output(int32_t* array, int16_t size) {
    int8_t discharge = maxDischarge(array, size);

    filling('d');

    for (int16_t i = 0; i < size; i++) {
        if (i && !((i + 1) % 5))
            printf("[%*.d ]\n", discharge, array[i]);
        else
            printf("[%*.d ]", discharge, array[i]);
    }

    printf("\n");
    filling('s');
}