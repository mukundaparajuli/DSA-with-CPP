#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<"\t";
    }
}

int main(){
    vector<int> v;

    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(16);
    v.push_back(17);

    int s=0;
    int e=v.size()-1;

    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }

    printVector(v);
}