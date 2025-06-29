#include <stdio.h>
#include <strings.h>


int binarySearch(int number, int arry[], int arryLenght);

int main(){
    
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int numberToSearch = 6;
    int arrayLenght = (sizeof(numbers) / sizeof(numbers[0]));
    int result = binarySearch(numberToSearch,numbers,arrayLenght);
    if(result != -1){
        printf("Result: %d",result);

    }else{
        printf("%d not found!",result);
    }
    return 0;
}

int binarySearch(int number, int arry[], int arryLenght){

    int left;
    int right;
    int middle;

    left = 0;
    right = arryLenght - 1;


    while (left <= right){
        middle = (left + right) / 2;


        if(arry[middle] == number){
            
            return middle;
        }else if (arry[middle] < number)
        {
            left = middle + 1;

        }else
        {
            right = middle - 1;
        }

    }
    

    return -1;
}

