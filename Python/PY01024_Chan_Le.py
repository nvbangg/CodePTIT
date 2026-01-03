def check(s):
    return (sum(map(int, s)) % 10 == 0 and 
            all(abs(int(s[i]) - int(s[i-1])) == 2 for i in range(1, len(s))))

for _ in range(int(input())):
    print("YES" if check(input()) else "NO")
