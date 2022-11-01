
s="[TEST START] [PASS] Test case 0 [SKIP]"

keys=[]
key_strings=""
for i in range(len(s)):
    if s[i]=="[":
        key_strings=""
    elif s[i]=="]":
        keys.append(key_strings)
    else:
        key_strings+=s[i]

mp={}
for key in keys:
    if key in mp:
        mp[key]+=1
    else:
        mp[key]=0
print(mp)