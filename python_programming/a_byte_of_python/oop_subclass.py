class SchoolMember:
    def __init__(self,name,age):
        self.name = name
        self.age = age
        print 'Initialized SchoolMember: {}'.format(self.name)

    def tell(self):
        print 'Name : {} Age: {}'.format(self.name, self.age)

class Teacher(SchoolMember):
    def __init__(self,name,age,salary):
        super(Teacher, self).__init__(name,age)
        self.salary = salary
        print 'Initialized Teacher :',self.name

    def tell(self):
        super(Teacher, self).tell()
        print 'Salary:', self.salary

class Student(SchoolMember):
    def __init__(self,name,age,marks):
        super(Student, self).__init__(name,age)
        self.marks = marks
        print 'Initialized Student:',self.name

    def tell(self):
        super(Student, self).tell()
        print 'Marks', self.marks

t = Teacher('Mrs.Shrividya', 40, 30000)
s = Student('Swaroop', 25, 75)

members = [t,s]
for member in members:
    print member.tell()
