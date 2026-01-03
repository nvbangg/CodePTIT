with open('SOTAY.txt','r') as f:
    lines = f.readlines()
    arr = [line.strip() for line in lines]
    contacts = []
    idx = 0
    tmp = arr[idx]
    idx += 1
    while idx < len(arr):
        x = [tmp[5:], arr[idx] + ':', arr[idx + 1]]
        idx += 2
        contacts.append(x)
        if idx < len(arr) and 'Ngay' in arr[idx]:
            tmp = arr[idx]
            idx += 1
    contacts.sort(key=lambda x : (x[1].split()[-1], x[1].split()[-2]))
    with open('DIENTHOAI.txt','w') as outfile: 
        for x in contacts:
            line = f"{x[1]} {x[2]} {x[0]}\n" 
            outfile.write(line)