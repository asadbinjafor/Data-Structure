#include<iostream>
using namespace std;

int main(){

int arr[10]= {21,32,1,8,7,5,3,2,17,20};

cout<<"Values in normal order : "<<endl;

for(int i=0; i<10 ; i++)

{
    cout<< arr[i] << " ";
}

cout<< endl;

cout<<"Values in reverse order : "<<endl;

for(int i=9; i>=0 ; i--)

{
    cout<< arr[i] << " ";
}

cout<< endl;

}
