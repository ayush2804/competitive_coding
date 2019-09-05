f= open("test.txt","r")
l=list()
for i in f:
    l.append(int(i))
ar=l
count=0
i=0
while i<len(ar)-1:
    if ar[i]>ar[i+1]:
        ar[i],ar[i+1]=ar[i+1],ar[i]
        i=-1
        count+=1
    i+=1
print(count)