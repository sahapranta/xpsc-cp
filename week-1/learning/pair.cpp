#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, int> student = make_pair("Rahim", 10);
    pair<string, int> student2 = {"Karim", 10};

    auto [name, roll] = student;

    cout << student.first << " " << student.second << endl;
    cout << name << " " << roll << endl;

    int n;
    cin >> n;
    pair<string, int> students[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }

    for (auto &[x, y] : students)
    {
        cin >> x >> y;
    }

    for (auto [x, y] : students)
    {
        cout << x << " " << y << '\n';
    }

    tuple<string, int, string> tStudent = make_tuple("Rahim", 10, "01924565272");
    tuple<string, int, string> tStudent2 = {"Rahim", 10, "01924565272"};

    cout << get<0>(tStudent) << " " << get<1>(tStudent) << " " << get<2>(tStudent) << '\n';

    auto [nm, r, phn] = tStudent2;

    cout << nm << " " << r << " " << phn << '\n';

    return 0;
}