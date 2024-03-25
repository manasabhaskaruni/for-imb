class employee():
    def __init__(self,name,rollno):
        self.name=name
class employee1(employee):
    def __init__(self,rollno):
        self.rollno=rollno
emp=employee1("manasa",8)
print(emp.name,emp.rollno)
print("edited for-imb")
