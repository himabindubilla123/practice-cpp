#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

template<typename T>
double getAverage(vector<T> const& v) {
    if (v.empty()) {
        return 0;
    }
    return accumulate(v.begin(), v.end(), 0.0) / v.size();
}

int main()
{
    vector<int> v = {5, 3, 8, 7, 9};

    double avg = getAverage(v);
    cout << "Average is " << avg << endl;

    return 0;
}
