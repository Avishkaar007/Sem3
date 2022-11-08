

import my3 as p

def series_sum(x,n):
    # 1 - ((x^2)/2!) + ((x^4)/4!)-........ ((x^n)/n!)
    sum=0
    sign=1
    for a in range(0,2*n,2):
        sum+=((x**a)/p.nFact(a))*sign
        sign*=-1
    return sum
def inp():
    x=int(input("Enter 'x' : "))
    n=int(input("Enter 'n' : "))
    print(series_sum(x,n))
if __name__=="__main__":
    inp()
