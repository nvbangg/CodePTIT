class Student:
    def __init__(self, name, theory_score, practice_score, id):
        self.name = name
        self.theory_score = theory_score
        self.practice_score = practice_score
        self.status = ""
        self.id = "TS0" + str(id)

    def get_avg_score(self):
        avg_score = (self.theory_score + self.practice_score) / 2
        if avg_score >= 9.5:
            self.status = "XUAT SAC"
        elif avg_score >= 8:
            self.status = "DAT"
        elif avg_score >= 5:
            self.status = "CAN NHAC"
        else:
            self.status = "TRUOT"
        return avg_score

    def __str__(self):
        return f"{self.id} {self.name} {self.get_avg_score():.2f} {self.status}"


students = []
for _ in range(1, int(input()) + 1):
    name = input()
    theory_score = float(input())
    if theory_score > 10:
        theory_score /= 10
    practice_score = float(input())
    if practice_score > 10:
        practice_score /= 10
    stu = Student(name, theory_score, practice_score, _)
    students.append(stu)

students.sort(key=lambda x: x.get_avg_score(), reverse=True)
for student in students:
    print(student)
