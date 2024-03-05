# BubbleSort
## Algorithm:
A certain number of passes through the array are performed - starting from the beginning of the array, pairs of neighboring array elements are enumerated. 
If the 1st element of the pair is greater than the 2nd, the elements are rearranged.  
Pairs of array elements are iterated (passes through the array are repeated) or (n-1) times, or until the next pass reveals that there is no longer a need to perform permutations.  
With each pass of the algorithm through the inner loop, the next largest element of the array is placed in its place at the end of the array next to the previous “largest element”, 
and the smallest element is moved one position to the beginning of the array.
## Difficulty: O(n²)
## PseudoCode:
```
FOR J=1 TO n-1 STEP 1
  F=0
  FOR I=0 TO n-1-J STEP 1
    IF A[I]>A[I+1] THEN SWAP A[i],A[I+1]:F=1
  NEXT I
  IF F=0 THEN EXIT FOR
NEXT J
```
## Source: [Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort)
