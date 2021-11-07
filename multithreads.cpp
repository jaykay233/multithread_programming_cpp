#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void myprint(int i){
    cout<<"i am "<<i<<endl;
}

int main(){
    vector<thread> mythreads;
    for(int i=0;i<10;i++){
        mythreads.push_back(thread(myprint,i));
    }
    for(auto iter=mythreads.begin();iter!=mythreads.end();iter++)
        iter->join();

    cout<<"I love China!"<<endl;
    return 0;
}