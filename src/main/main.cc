#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution s;
    vector<int> v={5,9,3,1,7};
    cout<<"Input:[ ";
    for(auto&i : v)
        cout<<i<<" ";
    cout<<"]";    
    cout<<" Output:[ ";   
    s.heapsort(v);
    for(auto&i : v)
        cout<<i<<" ";
    cout<<"]"<<endl;     
    return EXIT_SUCCESS;
}