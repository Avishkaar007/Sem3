
class List:
    def __init__(self) :
        lst=[]
    def __init__(self,lst):
        self.lst=lst
    # def __init__(self,lst1,lst2):
    #     self.lst1=lst1
    #     self.lst2=lst2
        
    def isAllNum(self):
        for a in range(len(self.lst)):
            if (type(self.lst[a])==type(1)):
                pass
            else:
                return False
        return True
    def oddCount(self):
        if (self.isAllNum()):
            count=0
            for a in range(len(self.lst)):
                if (self.lst[a]%2)==0:
                    count+=1
            return count
        else:
            return "Not a Numerical Array"
    def largestString(self):
        for a in range(len(self.lst)):
            if (type(self.lst[a])==type("a")):
                pass
            else:
                return "Not All string"
        
        lenArr=[]
        for b in range(len(self.lst)):
            lenArr.append(len(self.lst[b]))

        ind=lenArr.index(max(lenArr))
        return self.lst[ind]

    def reverse(self):
        return self.lst[::-1]
    def find(self,elem):
        return self.lst.index(elem)
    def delete(self,elem):
        self.lst.remove(elem)
    def rSort(self):
        self.lst.sort(reverse=True)
    def common(self,lst2):
        print("Common Elements")
        for x in self.lst:
            if x in lst2:
                print(x,end=" ")
        print()
        

lstn=[1,2,3,4,5]
lstm=[1,2,3,'A','Books']

lsts=["A","Apple","Bluetooth"]
lst=List(lsts)
lst1=List(lstn)

print(lst.isAllNum())
print(lst1.oddCount())
print(lst.largestString())
print(lst.reverse())
print(lst.find('Apple'))
lst.delete("A")
print(lst.lst)
lst1.rSort()
print(lst1.lst)
lst1.common(lstm)
