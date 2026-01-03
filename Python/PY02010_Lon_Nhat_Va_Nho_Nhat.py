while True:
    n = int(input())
    if not n: 
        break
    nums = [int(input()) for _ in range(n)]
    if min(nums) == max(nums):
        print("BANG NHAU")
    else:
        print(f"{min(nums)} {max(nums)}")