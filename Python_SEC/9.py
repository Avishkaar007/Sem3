def maxPercentage(dic):
    sumArr=[]
    for a in range(len(dic)):
        val=0
        for x in dic[a].values():
            val+=x
        sumArr.append(val)

    print(max(sumArr)," by Student ",sumArr.index(max(sumArr))+1)
        
stu1={"Mathematics":80,"English":75, "Science":83,"Social Studies":71}
stu2={"Mathematics":88,"English":82, "Science":90,"Social Studies":69}
stu3={"Mathematics":70,"English":92, "Science":68,"Social Studies":87}
stu4={"Mathematics":54,"English":67, "Science":62,"Social Studies":70}
# stu={"Student1":stu1,"Student2":stu2,"Student3":stu3,"Student4":stu4}
stu=[stu1,stu2,stu3,stu4]
maxPercentage(stu)
