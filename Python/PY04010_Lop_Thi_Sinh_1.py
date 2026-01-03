class Student:
    def __init__(self, name, birthday, P1, P2, P3):
        self.name = name
        self.birthday = birthday
        self.P1 = P1
        self.P2 = P2
        self.P3 = P3
        self.total = P1 + P2 + P3

    def out(self):
        return f"{self.name} {self.birthday} {self.total}"

name = input().strip()
birthday = input().strip()
P1 = float(input().strip())
P2 = float(input().strip())
P3 = float(input().strip())
student = Student(name, birthday, P1, P2, P3)
print(student.out())