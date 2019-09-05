#python3
n=int(input())
s=[int(x) for x in input().split()]
s.sort(reverse=True)
t=s[0]*s[1]
print(t)
