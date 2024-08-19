#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int getar(vector<int> a)
{
    int n = a.size();
    stack<int> st;
    int i = 0, ans = 0;
    while (i < n)
    {
        while (!st.empty() && a[st.top()] > a[i])
        {
            int h = a[st.top()];
            st.pop();
            if (st.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main()
{

    vector<int> a = {3, 4, 5, 6, 2};
    cout << getar(a) << endl;
    return 0;
}