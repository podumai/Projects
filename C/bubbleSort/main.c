#include "bubblesort.h"


int32_t main() {
    int32_t* arrayInt = NULL;
    int16_t size;

    description();

    arrayInt = initArray(&size);

    if (arrayInt) {
        fillArray(arrayInt, size);
        bubbleSort(arrayInt, size);
        output(arrayInt, size);
        free(arrayInt);
    }
    else
        printf("Error ocurred\nUnable to allocate memory :(\n");
    
    system("pause");

    return 0;
}