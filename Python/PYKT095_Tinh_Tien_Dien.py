import string
def get_limit(type):
    if type == "A":
        return 100
    elif type == "B":
        return 500
    elif type == "C":
        return 200
    
class Customer:
    def __init__(self, id, name, fee_under_limit, fee_over_limit, VAT, total_fee):
        self.id = f"KH{id:02d}"
        self.name = name
        self.fee_under_limit = fee_under_limit
        self.fee_over_limit = fee_over_limit
        self.VAT = VAT
        self.total_fee = total_fee
        
    def __str__(self):
        return f"{self.id} {self.name} {self.fee_under_limit} {self.fee_over_limit} {self.VAT} {self.total_fee}"
    
Customers = []
for _ in range(int(input())):
    name = string.capwords(input().strip())
    type, start, end = map(str, input().split())
    elec = int(end) - int(start)
    elec_limit = get_limit(type)
    if elec <= elec_limit:
        fee_under_limit = elec * 450
        fee_over_limit = 0
    else:
        fee_under_limit = elec_limit * 450
        fee_over_limit = (elec - elec_limit) * 1000
    VAT = fee_over_limit // 20
    total_fee = fee_under_limit + fee_over_limit + VAT
    Customers.append(Customer(_ + 1, name, fee_under_limit, fee_over_limit, VAT, total_fee))

Customers.sort(key=lambda x: -x.total_fee)
for customer in Customers:
    print(customer)