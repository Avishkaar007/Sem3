
from matplotlib import pyplot as plt
data=[]
def inp():
    n=int(input("Enter number of integers : "))
    for x in range(n):
        print("Enter Element ",(x+1)," : ",end="")
        e=float(input())
        data.append(e)
inp()
plt.hist(data)
plt.show()