#include<iostream>

void sort(char array[], int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(array[j]<array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

            }
        }
    }
}
int main()
{
    //trying bubble sort on alphabets; cause why the fuck not
    char array[] = {'b', 'n', 'm', 'J', 'k' , 'a'};
    int size = sizeof( array[])/sizeof(array[0]);

    sort(array,size);
    for(char element:array){
        std::cout<< element<<" ";
    }
    return 0;
}