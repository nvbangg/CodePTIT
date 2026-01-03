with open('CONTACT.in', 'r') as file:
    lines = file.readlines()
    gmail = [line.strip() for line in lines]
    my_gmail = set()
    for g in gmail:
        my_gmail.add(g.lower())
    for gmail in sorted(my_gmail):
        print(gmail)