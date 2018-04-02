#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <deque>
#include <string.h>
#include <sstream>
#include <math.h>

using namespace std;

#define PI atan2(0, -1)
#define epsilon 0.000000001
#define INF 5000000000000000000
#define MOD 1000000007

int N, maxi = 0, partPoints [100010];
pair<int, int> elements [100010];
long long ret = 0;

int main(){
    freopen("sort.in", "r", stdin); freopen("sort.out", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(18);
    cin >> N;
    for(int i = 0; i < N; i++){ cin >> elements[i].first; elements[i].second = i; }
    sort(elements, elements+N);
    for(int i = 1; i < N; i++){
        maxi = max(maxi, elements[i-1].second);
        partPoints[i] = maxi-(i-1);
    }
    for(int i = 0; i < N; i++){
        int add = 1;
        if(i > 0) add = max(add, partPoints[i]);
        if(i < N-1) add = max(add, partPoints[i+1]);
        ret += add;
    }
    cout << ret << '\n';
    return 0;
}
