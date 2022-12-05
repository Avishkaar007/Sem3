class Student:

    maxAvgMarks=0

    @staticmethod
    def setMaxAvgMarks(avgMarks):
        if avgMarks>Student.maxAvgMarks:
            Student.maxAvgMarks=avgMarks

    def __init__(self,name,marks1,marks2,marks3):
        
        self.name=name
        self.marks1=marks1
        self.marks2=marks2
        self.marks3=marks3
        self.avgMarks=(marks1+marks2+marks3)/3
        self.setMaxAvgMarks(self.avgMarks)
    

    def __del__(self):
        print("Destructor called ")
obj=Student("A",10,20,23)
obj2=Student("A",10,20,23)
obj3=Student("A",1,20,23)

print(Student.maxAvgMarks)