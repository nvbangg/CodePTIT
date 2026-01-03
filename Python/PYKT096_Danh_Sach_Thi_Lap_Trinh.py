import re


class Candidate:
    def __init__(self, id, name, id_team, university):
        self.id = f"C{id:03d}"
        self.name = name
        self.id_team = id_team
        self.university = university

    def __str__(self):
        return f"{self.id} {self.name} {self.id_team} {self.university}"


infor_university = [0]
for _ in range(int(input())):
    id = input().strip()
    name = input().strip()
    infor_university.append((id, name))

Candidates = []
for _ in range(int(input())):
    name = input().strip()
    tmp = input().strip()
    id_team, university = (
        infor_university[int(tmp[4:])][0],
        infor_university[int(tmp[4:])][1],
    )
    Candidates.append(Candidate(_ + 1, name, id_team, university))

Candidates.sort(key=lambda x: x.name)
for candidate in Candidates:
    print(candidate)
