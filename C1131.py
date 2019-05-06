n = int(input())
a = list(map(int, input().split()))
a.sort()
print(" ".join(list(map(str, a[::2]+a[-(n%2)-1::-2]))))
