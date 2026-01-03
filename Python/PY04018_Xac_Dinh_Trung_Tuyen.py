mark = [0, 2.0, 1.5, 1.0, 0]


class Teacher:
    def __init__(self, name, admission_code, it_score, major_score, id):
        self.name = name
        self.admission_code = admission_code
        self.it_score = it_score
        self.major_score = major_score
        self.total = 0
        self.status = ""
        self.subject = ""
        self.id = "GV{:02}".format(id)

    def calculate_score(self):
        c, sco = self.admission_code[0], self.admission_code[1]
        if c == "A":
            self.subject = "TOAN"
        elif c == "B":
            self.subject = "LY"
        else:
            self.subject = "HOA"
        self.total = (self.it_score * 2) + self.major_score + mark[int(sco)]
        if self.total <= 18:
            self.status = "LOAI"
        else:
            self.status = "TRUNG TUYEN"

    def __str__(self):
        return f"{self.id} {self.name} {self.subject} {self.total} {self.status}"


teachers = []
for _ in range(1, int(input()) + 1):
    name = input()
    admission_code = input()
    it_score = float(input())
    major_score = float(input())
    tea = Teacher(name, admission_code, it_score, major_score, _)
    tea.calculate_score()
    teachers.append(tea)

teachers.sort(key=lambda x: x.total, reverse=True)
for tea in teachers:
    print(tea)
