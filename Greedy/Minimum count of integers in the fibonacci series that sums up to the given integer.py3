def fibonnaci(k):
    fiblist=[0,1,1]
    i=3
    while True:
        t=fiblist[i-2]+fiblist[i-1]
        if t>k:
            break
        fiblist.append(t)
        i+=1
    return fiblist
    
def minimumcount(inputnum):
    a=fibonacci(inputnum)
    output=0
    j=len(a)-1
    while inputnum>0:
        output+=(inputnum//a[j])
        inputnum%=a[j]
        j-=1
    return output
    
inputnum=int(input())
print(minimumcount(inputnum))
