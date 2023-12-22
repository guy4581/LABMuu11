// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};

string randomnum(){
    int x = rand()%10;
    return grade[x];
}


int main(){
     srand(time(0));
    int i = 0;
    cout << "Press Enter 3 times to reveal your future.";
    do{
        cin.get();
        i++;

    }while(i < 3);
    
    cout << "You will get " << randomnum() <<  " in this 261102." ;
    
    
    

}
