/*
Nama        : Muhammad Zulfikar Ali
NPM         : 140810180064
Kelas       : B
Deskripsi   : Sequential search
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){
    int dataku[10] = {7,9,2,10,15,4,5,8,11,20};
    int caridata, i, flag = 0;

    cout<<"PENCARIAN DENGAN SEQUENTIAL SEARCH"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Data   : \n";
        for(int n=0; n<10; n++){
            cout<<dataku[n]<<"\t";
        }
    cout<<endl;

    cout<<"\nMasukkan data yang ingin Anda cari : ";
    cin>>caridata;

    for(i = 0; i<10; i++){
        if(dataku[i]==caridata){
            flag = 1;
            break;
        }
    }


    if(flag==1){
        cout<<"Data ditemukan pada indeks ke-"<<i<<endl;
    }
    else{
        cout<<"Data tidak ditemukan = 0"<<endl;
    }
}
