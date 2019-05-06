#include <stdio.h>
#include <algorithm>

int n, num, m = -1, cnt = 0, s, chk = 0;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (i == 0)
        {
            s = num;
        }
        if (num == 1)
            cnt++;
        else if (num == 0)
        {
            if (!chk)
                chk = cnt;
            m = std::max(cnt, m);
            cnt = 0;
        }
        if (i == n - 1)
        {
            if (num == 1 && s == 1)
            {
                m = std::max(m, chk + cnt);
            }
        }
    }
    printf("%d", std::max(cnt, m));
    return 0;
}