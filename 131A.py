s = input() ; chk = True
if s == s.upper():
    s = s.lower()
elif (len(s) == 1 and s.islower()) or (s[0].islower() and s[1:].isupper()):
    s = s.capitalize()
print(s)