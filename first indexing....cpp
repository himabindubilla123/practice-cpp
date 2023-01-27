#include <bits/stdc++.h>
using namespace std;
int firstIndex(int input[], int size, int x, int currIndex){
if(size==currIndex){
return -1;
}
if(input[currIndex] == x){
return currIndex;
}
return firstIndex(input,size,x,currIndex+1);
}
int main(){
int input[] = {9,8,10,8,4,8,2,5,7,9,2,8};
int x = 11;
int size = 11;
cout<<firstIndex(input,size,x,0);
return 0;
}

