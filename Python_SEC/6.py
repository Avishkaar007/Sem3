
t1=(1,2,5,7,9,2,4,6,8,10)
def t_even(tup):
    te=()
    for e in tup :
        if(e%2)==0:
            te+=(e,)
    print("Even Element of tuple : ",te)
t_even(t1)
t2=(11,13,15)
print("t2 :" , t2)
t1+=t2
print("(t1+t2) : ",t1)
print("Maximum Value in tuple : ",max(t1))
print("Minimum Value in tuple : ",min(t1))
