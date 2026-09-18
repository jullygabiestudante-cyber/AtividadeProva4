#include <bits/stdc++.h>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.



void duration(vector<int> &d, int n) {
    for (int i = 0; i < n; i++) {
        int k = d[i];
        int j = i -1;
        while (j >= 0 &&  d[j] > k) {
            d[j +1]  = d[j];
            j--;
        }
        d[j+1] = k;

    }

}
int curr =0, totCurr =0;
    int somar(vector<int> &d, int n ) {


        for (int i = 0; i < n; i++) {
            curr += d[i];
            totCurr +=  curr;
        }
        return totCurr;
    }



int main() {


        vector<int> d{6,1,4,3};
        int n = 4;

        duration(d, n);


        for (int i = 0; i < n; i++) {
            cout << d[i] << endl;
        }
        cout<<somar(d, n);
}
