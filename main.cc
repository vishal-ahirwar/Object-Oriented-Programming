#include <algorithm>
#include <vector>
#include <iostream>

/****************************
Copyright(c) 2022 Vishal Ahirwar. 
****************************/

using namespace std;
int solution(vector<int> &A)
{
    auto _min = *min_element(A.begin(), A.end());

    bool FLAG_IS{false}, FLAG_LOOP{false};
    while (FLAG_IS == false)
    {
        if (_min < 0)
        {
            _min = 1;
        }
        else
        {

            ++_min;
        };
        for (auto i = 0; i < A.size(); ++i)
        {

            if (_min == A[i])
            {
                FLAG_LOOP = true;
                break;
            }
            else
            {
                FLAG_LOOP = false;
            };
        };
        if (!FLAG_LOOP)
        {
            FLAG_IS = true;
        };
    };

    return _min;
}

int main(void)
{
    vector<int> a;
    printf("len : ");
    int len{0};
    cin >> len;
    for (auto i = 0; i < len; ++i)
    {
        a.push_back(i);
    };
    printf("push_back() done ..\n");
    auto x = solution(a);
    cout << "smallest posittive number which doesn't exist in the vector : " << x << "\n";

    return 0;
}