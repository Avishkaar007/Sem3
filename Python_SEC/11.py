#!/usr/bin/python3

def linearSearch(lst):
    elem=input("Enter element to be searched ")
    for a in lst:
        if a==elem:
            print(lst.index(elem))
            return
    print("Element Not Find ")

def binarySearch(lst,start,end,elem):
    mid=(start+end)//2
    if lst[mid]==elem:
        print("Element found at ",lst.index(elem))
    elif lst[mid]>elem:
        end=mid-1
        binarySearch(lst,start,end,elem)
    else:
        start=mid+1
        binarySearch(lst,start,end,elem)

def bubbleSort(lst):
    for a in range(len(lst)):
        for b in range(len(lst)-1):
            if lst[b]>lst[b+1]:
                lst[b],lst[b+1]=lst[b+1],lst[b]
    print(lst)


def selectionSort(lst): 
    print()
    for a in range(len(lst)):   
        min_idx=a
        for b in range(a+1 ,len(lst)):  # 10,22,54,32,2,3
            if lst[b]<lst[min_idx]: 
                min_idx=b
        lst[min_idx],lst[a]=lst[a],lst[min_idx]
        print(lst)
    print()

def insertionSort(lst):
    for a in range(1,len(lst)):  # 10,22,54,59,32,2,3
        key=lst[a]
        b=a-1
        while ((lst[b]>key)  and (b>-1)):
            lst[b+1],lst[b]=lst[b],lst[b+1]
            b-=1
    
    return lst
def menu(lst):
    print("1: Linear Search , 2 : Binary Search , 3 : Bubble Sort \n4: Insertion Sort , 5 :Selection Sort")
    ch=int(input("Enter your choice : "))
    if ch==1:
        linearSearch(lst)
        menu(lst)
    
    if ch==2:
        elem=eval(input("Enter element to be searched "))
        lst=insertionSort(lst)
        print(lst)
        binarySearch(lst,0,len(lst)-1,elem)
        menu(lst)

    if ch==3:
        bubbleSort(lst)
        menu(lst)
    if ch==4:
        print(insertionSort(lst))
        
        menu(lst)
    if ch==5:
        selectionSort(lst)
        menu(lst)


# student_list=list(input("Enter Students name in list form"))
lst=['Z',"A",'C',"X","B"]
lst=[10,22,54,32,2,3]
menu(lst)