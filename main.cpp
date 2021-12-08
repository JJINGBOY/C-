#include<iostream>
#include<time.h>

#include"Trace.h"

using namespace std;
int addone(int);

int main(){
    clock_t start,end;
    start = clock();
    char* name="iii";
    Trace t(name);
    
    int i,y;
    for(i=0;i<100;i++){
        y = addone(i);
    }


    end = clock();
    cout<<double(end-start)/CLOCKS_PER_SEC<<endl;
    getchar();
}
int addone(int i){
    char* name="addone";
    Trace t(name);
    return i+1;
}


//0.001 
//8.881
//