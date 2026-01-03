def countTotalSetBits(n: int) -> int:
    if n <= 0:
        return 0
    total_set_bits = 0
    i = 0
    while (1 << i) <= n:
        block_size = 1 << (i + 1)
        num_full_blocks = (n + 1) // block_size
        total_set_bits += num_full_blocks * (1 << i)
        remainder = (n + 1) % block_size
        total_set_bits += max(0, remainder - (1 << i))
        i += 1

    return total_set_bits


def solve(n: int) -> float:
    if n <= 0:
        return 0.0
    bit_len_n = n.bit_length()
    total_prob_sum = 0.0
    for k in range(1, bit_len_n):
        start = 1 << (k - 1)
        end = (1 << k) - 1
        num_set_bits = countTotalSetBits(end) - countTotalSetBits(start - 1)
        total_prob_sum += num_set_bits / k

    start_last_block = 1 << (bit_len_n - 1)
    num_set_bits_last_block = countTotalSetBits(n) - countTotalSetBits(
        start_last_block - 1
    )
    total_prob_sum += num_set_bits_last_block / bit_len_n
    return total_prob_sum


for _ in range(int(input())):
    a, b = map(int, input().split())
    prob_sum_in_range = solve(b) - solve(a - 1)
    count_of_numbers = b - a + 1
    final_probability = prob_sum_in_range / count_of_numbers
    print(f"{final_probability:.5f}")
