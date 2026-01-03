class Product:
    def __init__(self, id, name, quantity, unit_val, discount):
        self.name = name
        self.id = id
        self.quantity = quantity
        self.unit_val = unit_val
        self.discount = discount
        self.total = self.unit_val * quantity - self.discount

    def __str__(self):
        return f'{self.id} {self.name} {self.quantity} {self.unit_val} {self.discount} {self.total}'

products = []
for i in range(1, int(input()) + 1):
    id = input()
    name = input()
    quantity = int(input())
    unit_val = int(input())
    discount = int(input())
    products.append(Product(id, name, quantity, unit_val, discount))

products.sort(key=lambda p: p.total, reverse=True)
for product in products:
    print(product)