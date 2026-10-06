#include <stdio.h>

int contains(int item, int arr[], int size	){
	// return 1 if "item" exists in "arr"
	for (int i = 0; i < size; i++){
		if (arr[i] == item) return 1;
	}
	return 0;
}

int main(){
	int arr[] = {
		2, 9, 1, 0, 2, 5
	};
	printf("Result: %d\n", contains(0, arr, 6));
    
	printf("Result: %d\n", contains(3, arr, 6));

	printf("Result: %d\n", contains(2, arr, 6));
}
