import math
import string
from collections import defaultdict

class Student:
    def __init__(self, id, name, p1, p2, p3):
        self.id = f'SV{id:02d}'
        self.name = string.capwords(name)
        self.p1 = p1
        self.p2 = p2
        self.p3 = p3
        self.score = math.ceil(((p1 * 3 + p2 * 3 + p3 * 2) / 8) * 100) / 100

    def __str__(self):
        return f'{self.id} {self.name} {self.score:.2f}'

student_by_score = defaultdict(list)
for _ in range(int(input())):
    name = input()
    p1 = float(input())
    p2 = float(input())
    p3 = float(input())
    stu = Student(_ + 1, name, p1, p2, p3)
    student_by_score[stu.score].append(stu)

sorted_score = sorted(student_by_score.keys(), reverse=True)
idx = 1
for score in sorted_score:
    student_list = student_by_score[score]
    student_list.sort(key=lambda x: x.id)
    for stu in student_list:
        print(f'{stu} {idx}')
    idx += len(student_list)