#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr)
{
      bool swapp = true;
      while(swapp){
        swapp = false;
        for (int i = 0; i < arr.size()-1; i++) {
            if (arr[i]>arr[i+1] ){
                arr[i] += arr[i+1];
                arr[i+1] = arr[i] - arr[i+1];
                arr[i] -=arr[i+1];
                swapp = true;
            }
        }
    }
}


int main()
{
vector<int> vect;
vect.push_back(10);
    vect.push_back(20);
    vect.push_back(56);
     vect.push_back(57);
      vect.push_back(2);
       vect.push_back(1);
bubbleSort(vect);
for (int i = 0; i < vect.size(); i++)
      cout << vect[i] << " ";
    return 0;
}
