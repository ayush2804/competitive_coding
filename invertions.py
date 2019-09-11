def MergeSort(ar,l):
    l=len(ar)
    if l!=0:
     left=MergeSort(ar,l//2)
     right=left+1
    
ar=[2,4,1,5,3]
MergeSort(ar)