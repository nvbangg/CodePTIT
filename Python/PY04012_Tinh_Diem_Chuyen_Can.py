class Student():
    def __init__(self, id, name, classes):
        self.id = id
        self.name = name
        self.classes = classes
        self.point = 10

    def calc(self, status):
        for c in status:
            if c == 'm':
                self.point = max(self.point - 1, 0)
            elif c == 'v':
                self.point = max(self.point - 2, 0)

    def __str__(self):
        parts = [self.id, self.name, self.classes, str(self.point)]
        if not self.point:
            parts.append('KDDK')
        return ' '.join(parts)

n = int(input())
students = []
students_id = {}

for _ in range(n):
    id = input().strip()
    name = input().strip()
    classes = input().strip()
    Stu = Student(id, name, classes)
    students.append(Stu)
    students_id[id] = Stu

for _ in range(n):
    id, status = map(str, input().split())
    students_id[id].calc(status)

for student in students:
    print(student)