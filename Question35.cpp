//program - searching element in the array(liner search)

#include<iostream>
using std::cout;
using std::cin;

int searchElement(int array[],int size, int userinput);


int main(){
    int numSeries[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(numSeries)/sizeof(numSeries[0]);
    int index,userinput;

    cout<<"Enter a element for serach: ";
    cin >>userinput;

    index = searchElement(numSeries,size,userinput);
    if(index != -1){
        cout<<"Your Searched element is at: " <<index <<"th index";
    }else{
        cout<<"Oops!!,Element not found";
    }


}

int searchElement(int array[],int size, int userinput){

    for(int i = 0; i < size; i++){
        if(array[i] == userinput){
            return i;
        }
    }

    return -1;
}

