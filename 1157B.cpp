#include <cstdio>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int n, chk = 0;
string s;
map<char, char> m;
int main()
{
  scanf("%d", &n);
  cin >> s;
  char a, c = '1';
  for (int i = 0; i < 9; i++) {
    cin >> a;
    m[c++] = a;
  }
  // for (map<char, char>::iterator it = m.begin(); it != m.end(); it++)
  //   printf("%c => %c\n", it->first, it->second);
  // printf("\n");
  char tmp;
  for (int i = 0; i < s.size(); i++)
  {
    tmp = m[s[i]];
    if (!chk && tmp > s[i])
      chk = 1;
    if (chk && tmp >= s[i])
      s[i] = tmp;
    if (chk && tmp < s[i])
      break;
  }
  cout << s << endl;
  return 0;
}