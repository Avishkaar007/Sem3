#!/usr/bin/python3

# Here we will show the frequency of each element irrespective of case

def charFreq(sentence):
    sentence=sentence.lower()
    dic={}
    for a in range(len(sentence)):
        if sentence[a] not in dic.keys():
            dic[sentence[a]]=1
        else:
            dic[sentence[a]]+=1
    print(dic)

sentence=input("Enter Sentence : ")
charFreq(sentence)
