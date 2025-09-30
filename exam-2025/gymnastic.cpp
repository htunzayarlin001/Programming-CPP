#include <iostream>
using namespace std;

int main() {
    //float score[4]={9.84,9.30,9.42,9.58};
    float score[4]={9.15,9.20,9.30,9.50};
    if (score[0]<score[1]){
        swap(score[0],score[1]);
    }
    if (score[2]<score[3]){
        swap(score[2],score[3]);
    }
    if (score[0]<score[2]){
        swap(score[0],score[2]);
    }
    if (score[1]<score[3]){
        swap(score[1],score[3]);
    }
    cout<<"Average score : "<<(score[1]+score[2])/2<<endl;
    return 0;
}
