#include <iostream>
#include <vector>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N(0);
    cin >> N;
    
    vector<int> v;
    int number;
    for (int i = 0; i < N; i++) {
        cin >> number;
        v.push_back(number);
    }
    
    int position(-1);
    cin >> position;
    
    if (position >= 0 && position < N)
        v.erase(v.begin() + position - 1);

  
    int from(-1), end(-1);
    cin>> from >> end;
    
    if (from >= 0 && from < v.size() && end >= from && end < v.size())
        v.erase(v.begin() + from - 1, v.begin() + from - 1 + end - from);

    cout << v.size() << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
        
    return 0;
}