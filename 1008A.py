s = input()
for i in range(len(s)-1):
    if s[i] not in "aouien":
        if s[i+1] not in "aouie": print("NO") ; break
else: print("NO" if s[-1] not in "aouien" else "YES")