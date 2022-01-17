#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> nums1(n);

    int m;
    cin >> m;
    vector<int> nums2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }

    int max;

    if (nums1[n - 1] > nums2[m - 1])
    {
        max = nums1[n - 1];
    }
    else
    {
        max = nums2[m - 1];
    }

    vector<int> count(max + 1);

    int vec[100];

    int k = 1;
    vec[0] = nums1[0];
    count[nums1[0]]++;

    for (int i = 1; i < n; i++)
    {
        if (nums1[i] != nums1[i - 1])
        {
            vec[k] = nums1[i];
            k++;
            count[nums1[i]]++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (count[nums2[i]] == 0)
        {
            vec[k] = nums2[i];
            k++;
            count[nums2[i]]++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}