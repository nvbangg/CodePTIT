def parse_date(date_str):
    d, m, y = map(int, date_str.strip().split('/'))
    return d, m, y

def days_in_month(m, y):
    if m == 2:
        return 29 if (y % 4 == 0 and (y % 100 != 0 or y % 400 == 0)) else 28
    if m in [1, 3, 5, 7, 8, 10, 12]:
        return 31
    return 30

def date_to_days(d, m, y):
    days = d
    for year in range(0, y):
        days += 366 if (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)) else 365
    for month in range(1, m):
        days += days_in_month(month, y)
    return days

floor = [0, 25, 34, 50, 80]

class Customer:
    def __init__(self, name, room, start_date, end_date, extra_fee, id):
        self.name = name
        self.room = room
        self.extra_fee = extra_fee
        self.days = self.calculate_days(start_date, end_date)
        self.id = 'KH{:02}'.format(id)

    def get_total_fee(self):
        return int(self.days) * floor[int(self.room[0])] + self.extra_fee

    def calculate_days(self, checkin, checkout):
        d1, m1, y1 = parse_date(checkin)
        d2, m2, y2 = parse_date(checkout)
        days1 = date_to_days(d1, m1, y1)
        days2 = date_to_days(d2, m2, y2)
        return days2 - days1 + 1

    def __str__(self):
        return f'{self.id} {self.name} {self.room} {self.days} {self.get_total_fee()}'

customers = []
for _ in range(1, int(input()) + 1):
    name = input()
    room = input()
    start_date = input()
    end_date = input()
    extra_fee = int(input())
    customer = Customer(name, room, start_date, end_date, extra_fee, _)
    customers.append(customer)

customers.sort(key=lambda x: x.get_total_fee(), reverse=True)
for customer in customers:
    print(customer)