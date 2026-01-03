from dataclasses import dataclass
from datetime import datetime

@dataclass
class Subject:
    id_sub: str
    name: str
    form: str

    @classmethod
    def load_from_file(cls, filename):
        subjects = {}
        with open(filename, 'r', encoding='utf-8') as f:
            n = int(f.readline().strip())
            for _ in range(n):
                id_sub = f.readline().strip()
                name = f.readline().strip()
                form = f.readline().strip()
                subjects[id_sub] = cls(id_sub, name, form)
        return subjects

@dataclass
class Session:
    id_ca: str
    date: str
    time: str
    id_room: str

    @property
    def dt(self) -> datetime:
        return datetime.strptime(f"{self.date} {self.time}", "%d/%m/%Y %H:%M")

    @classmethod
    def load_from_file(cls, filename):
        sessions = {}
        with open(filename, 'r', encoding='utf-8') as f:
            n = int(f.readline().strip())
            for _ in range(1, n + 1):
                date = f.readline().strip()
                time = f.readline().strip()
                id_room = f.readline().strip()
                ca_id = f"C{_:03d}"
                sessions[ca_id] = cls(ca_id, date, time, id_room)
        return sessions

@dataclass
class Schedule:
    id_ca: str
    id_sub: str
    id_group: str
    num_students: int

    @classmethod
    def load_from_file(cls, filename):
        schedules = []
        with open(filename, 'r', encoding='utf-8') as f:
            n = int(f.readline().strip())
            for _ in range(n):
                parts = f.readline().split()
                sched = cls(
                    id_ca = parts[0],
                    id_sub = parts[1],
                    id_group = parts[2],
                    num_students = int(parts[3])
                )
                schedules.append(sched)
        return schedules

subjects = Subject.load_from_file('MONTHI.in')
sessions = Session.load_from_file('CATHI.in')
schedules = Schedule.load_from_file('LICHTHI.in')

combine = []
for e in schedules:
    subj = subjects[e.id_sub]
    sess = sessions[e.id_ca]
    combine.append((sess.dt, sess.id_ca, sess, subj, e))

combine.sort(key=lambda x: (x[0], x[1]))

for _, _, sess, subj, e in combine:
    print(f"{sess.date} {sess.time} {sess.id_room} "
            f"{subj.name} {e.id_group} {e.num_students}")