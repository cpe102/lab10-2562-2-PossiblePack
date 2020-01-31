// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
    int i;
    char enter;
    cout << "Press Enter 3 times to reveal your future.\n";
    for(i=0;i<3;i++){
        cin.get();
    }
    srand(time(0));
    int x = rand()%9+1;
    string grade;
    if(x==1) grade = "A";
    else if(x==2) grade = "B+";
    else if(x==3) grade = "B";
    else if(x==4) grade = "C+";
    else if(x==5) grade = "C";
    else if(x==6) grade = "D+";
    else if(x==7) grade = "D";
    else if(x==8) grade = "F";
    else grade = "W";

    cout << "You will get " << grade << " in this 261102.";
    return 0;
}