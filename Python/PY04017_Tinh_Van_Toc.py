def get_initials(string):
    return ''.join(word[0].upper() for word in string.split())

class Coureur:
    def __init__(self, name, countryside, finishTime):
        self.name = name
        self.countryside = countryside
        self.finishTime = finishTime
        self.id = get_initials(countryside) + get_initials(name)
        self.speed = 0
    
    def CalculateSpeed(self):
        hh, mm = map(int, self.finishTime.split(':'))
        self.speed = 120 / ((hh - 6) + (mm / 60))
    
    def __str__(self):
        return f'{self.id} {self.name} {self.countryside} {round(self.speed)} Km/h'

coureurs = []
for _ in range(int(input())):
    name = input()
    countryside = input()
    time = input()
    cou = Coureur(name, countryside, time)
    cou.CalculateSpeed()
    coureurs.append(cou)
    
coureurs.sort(key= lambda x: x.speed, reverse=True)

for cou in coureurs:
    print(cou)