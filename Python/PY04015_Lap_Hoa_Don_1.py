class Customer:
    def __init__(self, id, name, old_index, new_index):
        self.id = 'KH{:02}'.format(id)
        self.name = name
        self.old_index = old_index
        self.new_index = new_index
        self.price = 0
    
    def Calculate(self):
        self.total = self.new_index - self.old_index
        if self.total <= 50:
            self.price = self.total * 102
        elif self.total <= 100:
            self.price = round(self.total * 150 * 1.03 - 2575)
        else:
            self.price = self.total * 210 - 7875
    
    def __str__(self):
        return f"{self.id} {self.name} {int(self.price)}"
    
n = int(input())
customers = []

for i in range(1, n + 1):
    name = input()
    old_index = int(input())
    new_index = int(input())
    customer = Customer(i, name, old_index, new_index)
    customer.Calculate()
    customers.append(customer)

customers.sort(key=lambda x: x.price, reverse=True)

for customer in customers:
    print(customer)