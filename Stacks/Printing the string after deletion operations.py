inputstr=input().strip()
outputstr=[]
for index in range(0,len(inputstr)):
    if inputstr[index]=='#' and len(outputstr)!=0:
        outputstr.pop(-1)
    else:
        outputstr.append(inputstr[index])
outputstr=''.join(outputstr)
print("The String after deletion operations is: "+outputstr) 
