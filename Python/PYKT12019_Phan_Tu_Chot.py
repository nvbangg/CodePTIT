for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    Minimum_in_the_left, Maximum_in_the_right, st = [-1] * n, [-1] * n, []
    st.append(a[0])
    for i in range(1, n):
        while st and a[i] >= st[-1]:
            Minimum_in_the_left[i] = st.pop()
        if st:
            Minimum_in_the_left[i] = -1
        st.append(a[i])

    st.clear()
    st.append(a[-1])
    for i in range(n - 2, -1, -1):
        while st and a[i] < st[-1]:
            Maximum_in_the_right[i] = st.pop()
        if st:
            Maximum_in_the_right[i] = -1
        st.append(a[i])

    cnt = 0
    for i in range(n):
        if i == 0:
            cnt += Maximum_in_the_right[i] != -1
        elif i == n - 1:
            cnt += Minimum_in_the_left[i] != -1
        else:
            cnt += Minimum_in_the_left[i] != -1 and Maximum_in_the_right[i] != -1

    print(cnt)
