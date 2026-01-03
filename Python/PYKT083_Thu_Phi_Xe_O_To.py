unit_price = {}
def init():
    unit_price[('Xe_con', '5')] = 10000
    unit_price[('Xe_con', '7')] = 15000
    unit_price[('Xe_tai', '2')] = 20000
    unit_price[('Xe_khach', '29')] = 50000
    unit_price[('Xe_khach', '45')] = 70000

init()

class Vehicle:
    def __init__(self, license_plate, name, capacity, status, date):
        self.license_plate = license_plate
        self.name = name
        self.capacity = capacity
        self.status = status
        self.date = date

Vehicles = []
Profit = {}

for _ in range(int(input())):
    vehicle = input().split()
    Vehicles.append(Vehicle(*vehicle))

for vehicle in Vehicles:
    if vehicle.status == 'IN':
        if vehicle.date not in Profit:
            Profit[vehicle.date] = unit_price[(vehicle.name, vehicle.capacity)]
        else:
            Profit[vehicle.date] += unit_price[(vehicle.name, vehicle.capacity)]

for date, profit in Profit.items():
    print(f"{date}: {profit}")