#include <stdio.h>

#define NOT_FOUND -1

int binarySearch(int begin, int end, int key, int vector[]){
	int middle = (begin + end) / 2;
	if (begin > end)
		return NOT_FOUND;
	if (key == vector[middle])
		return middle;
	else if (key < vector[middle])
		return binarySearch(begin, middle-1, key, vector);
	else if (key > vector[middle])
		return binarySearch(middle+1, end, key, vector);
	return NOT_FOUND;
}

int main(){
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Index: %d\n", binarySearch(0, 9, 5, vetor));
    return 0;
}
