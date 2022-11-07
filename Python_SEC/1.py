#!/usr/bin/python3

def check(s1,s2,s3):
        if (s1+s2)>s3:  
                if (s2+s3)>s1:
                        if (s1+s3)>s2:
                                print("Triangle Possible")
                        else :
                                print("Triangle not Possible")
                                quit()
                else :
                                print("Triangle not Possible")
                                quit()
        else :
                                print("Triangle not Possible")
                                quit()
def inp():
        s1=int(input("Enter Side 1 : "))
        s2=int(input("Enter Side 2 : "))
        s3=int(input("Enter Side 3 : "))
        s=(s1+s2+s3)/2
        check(s1,s2,s3)

        tup=calc(s1,s2,s3,s)
        return tup
def calc(s1,s2,s3,s):
        

        area=(s*(s-s1)*(s-s2)*(s-s3))**(1/2)
        perimeter=2*s
        tup=(area,perimeter)
        return tup

tup=inp()
print("Area : ",tup[0],"perimeter : ",tup[1])   
