#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 3});
    vec.emplace_back(1, 2);

    vector<int> v(5);

    vector<int> v(5, 100); //{100,100, 100, 100, 100}

    vector<int> v1(5, 20);
    vector<int> v2(v1); // copy vector

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
    
    //{10, 20, 12, 30}
    v.erase(v.begin()+1); //{10, 12, 30}
    //{10, 12, 23, 22, 36}
    v.erase(v.begin()+2, v.begin()+4); //{10, 12, 36} [start,end)


    //insert function
    vector<int> v(2, 100);
    v.insert(v.begin(), 300); //{300, 100, 100}
    v.insert(v.begin()+1, 2, 10); //{300, 10, 10, 100, 100}

    vector<int> copy(2, 50); //{50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50, 50, 300, 10, 10, 100, 100}

    v.size();

    v.pop_back();
    
    v1.swap(v2);

    v.clear(); //erases the entire vector
    
    v.empty();

}