#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<int> m)
{
    return m[0] + m[1] + m[2];
}

bool comparator(pair<string, vector<int>> s1, pair<string, vector<int>> s2)
{
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return sum(m1) > sum(m2);
}

int main()
{

    vector<pair<string, vector<int>>> student_marks{
        {"Rajat", {10, 20, 11}},
        {"Mahima", {10, 21, 3}},
        {"Anchal", {1, 3, 2}},
        {"Mehta", {20, 30, 1}}};

    sort(student_marks.begin(), student_marks.end(), comparator);

    for (auto s : student_marks)
    {
        cout << s.first << " " << sum(s.second) << endl;
    }

    return 0;
}