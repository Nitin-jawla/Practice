l1=[1,5,6,9,11]
l2=[3,4,7,8,10]
a=len(l1)
b=len(l2)
res=[]
i,j=0,0
while i<a and j<b:
    if l1[i]<l2[j]:
        res.append(l1[i])
        i+=1
    else:
        res.append(l2[j])
        j+=1
res=res+l1[i:]+l2[j:]
print(res)