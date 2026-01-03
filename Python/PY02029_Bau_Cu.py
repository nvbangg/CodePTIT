from collections import Counter

n, m = map(int, input().split())
votes = list(map(int, input().split()))

counter = Counter(votes)

if len(counter) < 2:
    print("NONE")
else:
    sorted_candidates = sorted(counter.items(), key = lambda x: (-x[1], x[0]))
    max_votes = sorted_candidates[0][1]

    for cand, count in sorted_candidates[1:]:
        if count < max_votes:
            print(cand)
            break
    else:
        print("NONE")
