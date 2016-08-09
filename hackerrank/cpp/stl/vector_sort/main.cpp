// HackerRank Practice Problems
// C++ > STL > Vector-Sort

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n, x; cin >> n;
    vector<int>v;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}












/*int main()
{
    vector<int>v; // creates an empty vector of integers
    int size = v.size();

    v.push_back(5); // The size increases by 1 after this.
    v.pop_back(); // After this the size decreases by 1
    sort(v.begin(),v.end()); // Will sort all the elements in the vector
}*/
