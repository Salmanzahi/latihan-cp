
#include <iostream>
using namespace std;

// jika p maka q

void doSomething(){
    cout << 'g' << endl;
}

int main(){
    int p = true;
    int q = true;
    if (p) {
        doSomething();
    }

    if(q){
        doSomething();
    }

}