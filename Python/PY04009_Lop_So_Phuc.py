from sys import stdin

def format_complex(z):
    real = int(z.real)
    imag = int(z.imag)
    sign = '+' if imag >= 0 else '-'
    return f'{real} {sign} {abs(imag)}i'

input_data = []
for line in stdin:
    input_data.extend(map(int, line.split()))

i = 0
t = input_data[i]
i += 1
for _ in range(t):
    a, b, c, d = input_data[i], input_data[i + 1], input_data[i + 2], input_data[i + 3]
    z1 = complex(a, b)
    z2 = complex(c, d)
    print(f'{format_complex((z1 + z2) * z1)}, {format_complex((z1 + z2) ** 2)}')
    i += 4
