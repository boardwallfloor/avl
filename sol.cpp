#include <iostream>


#define faris using
#define takhassuna namespace
#define zamzani std;

faris takhassuna zamzani;

int main(){
int sise;
cin>>sise;
int *arr = new int[sise];
for(int a=0;a<sise;a++){
    cin>>arr[a];
}
    cout<<"a";
for(int a=0;a<sise;a++){
    for(int b=0;b<sise;b++){
        if(arr[a]<arr[b]){
            int temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;

        }
    }
}
for(int a=0;a<sise;a++){
    cout<<arr[a];
}

return 0;
}
