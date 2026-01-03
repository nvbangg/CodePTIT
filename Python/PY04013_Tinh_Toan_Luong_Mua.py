class Station:
    def __init__(self, name, id):
        self.name = name
        self.id = 'T' + str(id).zfill(2)
        self.time = 0
        self.rainfall = 0
        self.avg_rainfall = 0

    def CalculateRainfall(self):
        self.avg_rainfall = self.rainfall / (self.time / 60)

    def Measure(self, startTime, endTime, rainfall):
        start_hh, start_mm = map(int, startTime.split(':'))
        end_hh, end_mm = map(int, endTime.split(':'))
        if end_mm < start_mm:
            end_mm += 60
            end_hh -= 1
        totalMinute = (end_hh - start_hh) * 60 + end_mm - start_mm
        self.time += totalMinute
        self.rainfall += rainfall

    def out(self):
        print(f'{self.id} {self.name} {self.avg_rainfall:.2f}')

n = int(input())
stations_map = {}
stations = []

for _ in range(1, n + 1):
    name = input().strip()
    st = input().strip()
    en = input().strip()
    rain = int(input())
    if name not in stations_map:
        station = Station(name, _)
        stations.append(station)
        stations_map[name] = station
    stations_map[name].Measure(st, en, rain)

for sta in stations:
    sta.CalculateRainfall()
    sta.out()