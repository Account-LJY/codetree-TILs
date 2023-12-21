#include <iostream>
#include <algorithm>

using namespace std;

int n;


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int nums[1000];

    for(int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }
    
    sort(nums, nums + 2 * n);

    int group_max = 0;
    for(int i = 0; i < n; i++) {
        int group_sum = nums[i] + nums[2*n - 1 - i];
        if(group_sum > group_max)
            group_max = group_sum;
    }

    cout << group_max;
    return 0;
}