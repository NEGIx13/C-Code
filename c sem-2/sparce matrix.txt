#include <iostream>
#include <string>

using namespace std;

struct triple{
    int x;
    int y;
    int val;
};

int display(struct triple *ptr); 
//int transpose();
//int add();

int main(){
    int n, r, c, choice, flag = 1;
    cout << "enter total rows in the matrix :- ";
    cin >> r;
    cout << "enter total cols in the matrix :- ";
    cin >> c;
    cout << "enter total non-zero values in the matrix :- ";
    cin >> n;
    struct triple s[n+1];
    s[0].x = r;
    s[0].y = c;
    s[0].val = n;
    for(int i=1;i<=n;i++){
        cout << "enter corrdinates for value no " << i << " :- ";
        cin >> s[i].x >> s[i].y;
        cout << "enter value to be recorded :- ";
        cin >> s[i].val;
    }
    cout << "sparce martrix created !" << endl;
    
    while(flag){
        cout << "which function would you like to perform:- \n";
        cout << "1) display all values. \n2) transpose \n3) add \n4) exit \n";
        cout << "your choice:- ";
        cin >> choice;
        switch(choice){
            case 1:
            display(&s);
            break;
            case 2:
//            transpose();
            break;
            case 3:
//            add();
            break;
            case 4:
            cout << "thank you for using this program ";
            flag = 0;
            break;
            default:
            break;
        }
    }
    return 0;
}

int display(struct triple *ptr){
    cout << "hi";
    printf("\n");
    return 0;
}