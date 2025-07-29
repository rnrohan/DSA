//counting total number of nodes in a tree upto a level
//error
#include<iostream>
#include<cmath>
using namespace std;
int count(int i,int level){
    int x=0;
    if(i>level){//base condition 
        return 0;
    }
    x=pow(2,i)+count(i+1,level);
    return x;
}
int main(){
    int level;
    cout<<"Enter level:";
    cin>>level;
    int nodes=count(0,level);
    cout<<"Total number of nodes for level:"<<level<<" are :"<<nodes<<"\n";
    return 0;
}