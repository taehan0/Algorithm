#include <iostream>
#include <vector>

using namespace std;

int main() {
        string number;
        vector<int> numberList;
        int locate;
        int calculate=0;
        cin>>number;
        for (int i=0;i<13;i++) {
                if (number[i]=='*') {
                        numberList.push_back(0);
                        locate=i;
                }
                else {
                        numberList.push_back(number[i]-48);
                }
        }
        for (int j=0;j<12;j=j+2) {
                calculate+=numberList[j]*1+numberList[j+1]*3;
        }
        calculate+=numberList[12];

        if (locate%2==0) {
                for (int k=0;k<=9;k++) {
                        if ((calculate+k)%10==0) {
                                cout<<k;
                        }
                }
        }
        else {
                for (int z=0;z<=9;z++) {
                        if ((calculate+3*z)%10==0) {
                                cout<<z;
                        }
                }
        }
}
