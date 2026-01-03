class Subject:
    def __init__(self, id, name, format):
        self.id = id
        self.name = name
        self.format = format
    
    def __str__(self):
        return f'{self.id} {self.name} {self.format}'

Subjects = []
for _ in range(int(input())):
    id = input()
    name = input()
    format = input()
    Subjects.append(Subject(id, name, format))

Subjects.sort(key= lambda x: x.id)
for s in Subjects:
    print(s)