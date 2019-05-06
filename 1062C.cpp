#include <cstdio>
#include <algorithm>
#include <utility>
using namespace std;
#define mod 1000000007
#define f first
#define s second

int n, q, chk = 0;
long long int pow2[100005];
char qr[100005];
pair<int, int> qcnt[100005]; // f = 0, s = 1
int main()
{
  scanf("%d %d", &n, &q);
  int cnt0 = 0, cnt1 = 0, a, b;
  qcnt[0] = make_pair(0, 0);
  scanf("%s", qr);
  for (int i = 1; i <= n; i++)
  {
    if (qr[i - 1] == '0')
      cnt0++;
    else
      cnt1++, chk = 1;
    qcnt[i] = make_pair(cnt0, cnt1);
  }
  // for (int i = 0; i <= n; i++)
  //   printf("%d => %d %d\n", i, qcnt[i].f, qcnt[i].s);
  pow2[0] = 1;
  for (int i = 1; i <= n + 1; i++)
  {
    pow2[i] = (pow2[i - 1] * 2) % mod;
  }
  // for (int i = 0; i <= n + 1; i++)
  //   printf("%d ", pow2[i]);
  // printf("\n");
  long long int ans = 0;
  while (q--)
  {
    scanf("%d %d", &a, &b);
    if (!chk)
    {
      printf("0\n");
      continue;
    }
    int r = qcnt[b].f - qcnt[a - 1].f, s = qcnt[b].s - qcnt[a - 1].s;
    // printf("%d %d\n", r, s);
    ans = ((pow2[s] - 1) % mod) * (pow2[r] % mod);
    if (chk)
      printf("%lld\n", ans % mod);
  }
  return 0;
}