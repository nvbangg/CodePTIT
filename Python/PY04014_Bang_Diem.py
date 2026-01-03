class Student:
    def __init__(self, name, id):
        self.name = name
        self.avg_point = 0
        self.id = 'HS' + str(id).zfill(2)
        self.status = ''
        self.avg_point = 0

    def CalculateAverage(self, toan, van, anh, ly, hoa, sinh, su, dia, gd, cn):
        avg = (toan * 2 + van * 2 + anh + ly + hoa + sinh + su + dia + gd + cn) / 12
        self.avg_point = round(avg + 0.01, 1)

    def __str__(self):
        if self.avg_point >= 9.0:
            self.status = 'XUAT SAC'
        elif self.avg_point >= 8.0:
            self.status = 'GIOI'
        elif self.avg_point >= 7.0:
            self.status = 'KHA'
        elif self.avg_point >= 5.0:
            self.status = 'TB'
        else:
            self.status = 'YEU'
        return f"{self.id} {self.name} {self.avg_point:.1f} {self.status}"
    
n = int(input())
students = []
for _ in range(1, n + 1):
    name = input()
    toan, van, anh, ly, hoa, sinh, su, dia, gd, cn = map(float, input().split())
    student = Student(name, _)
    student.CalculateAverage(toan, van, anh, ly, hoa, sinh, su, dia, gd, cn)
    students.append(student)
    students.sort(key=lambda x: x.avg_point, reverse=True)
for student in students:
    print(student)