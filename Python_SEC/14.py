
try:
    
    file1=open("file1.txt","w")
    file1.write("This is random text I am typing in midnight\nLine2\nLin3\nLine4\nLine5")
    file1.flush()
    file1.close()
    file1=open("file1.txt","r")
    f=file1.readlines()
    file=open("file.txt","w")
    data=[f[x] for x in range(0,len(f),2) ]
    file.writelines(data)
    file.flush()
    file.close()
    
    
    print("Alternative Lines copied Successfully")
except:
    print("Error Occured")

