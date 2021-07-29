#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> arr;

int main(void)
{

    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int result = 0; // 총 그룹의 수
    int cnt = 0; // 현재 그룹에 포함된 모험가의 수

    for(int i=0; i<n; i++)
    {
        cnt += 1; // 현재 그룹에 해당 모험가를 포함시키기
        if(cnt >= arr[i]) // 현재 그룹에 포함된 모험가의 수가 현재의 공포도 이상이라면, 그룹 결성
        {
            result += 1; // 총 그룹의 수 증가시키기
            cnt = 0; // 현재 그룹에 포함된 모험가의 수 초기화
        }
    }

    cout<<result<<endl; // 총 그룹의 수 출력

    return 0;
}