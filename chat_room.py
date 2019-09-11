s=input().split()
l=list()
for i in s:
    if i=='h' or i=='e' or i=='l' or i=='o':
        l.append(i)
k=('h','e','l','l','o')
if l==k:
    print("YES")
else:
    print("NO")