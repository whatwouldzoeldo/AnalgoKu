/*
Nama        : Muhammad Zulfikar Ali
NPM         : 140810180064
Kelas       : B
Deskripsi   : Insertion sort
*/

#include <iostream>
using namespace std;

void insertion (int data[]){
    int temp, j;

    for(int i=1; i<6; i++){
        temp = data[i];
        j = i - 1;
        while(data[j]<temp && j>=0){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
}

int main(){
    int data [] = {9,10,5,3,25,2};

    cout<<"INSERTION SORT"<<endl;
    cout<<"=============="<<endl;
    cout<<"\nDATA ->\n";

    for(int n = 0; n<6;n++){
        cout<<data[n]<<"\t";
    }

    cout<<endl;

    cout<<"\nDATA SETELAH DIURUTKAN\n";
    cout<<"------------------------\n";

    insertion(data);

    for(int x = 0; x<6;x++){
        cout<<data[x]<<"\t";
	}

    cout<<endl;
}

