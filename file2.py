f= open("test.txt","r")
l=list()
for i in f:
    l.append(int(i))
print(len(l))
f.close()