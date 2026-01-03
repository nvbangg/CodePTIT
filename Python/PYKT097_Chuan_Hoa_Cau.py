lines = []
while True:
    try:
        line = input()
        if not line:
            break
        lines.append(line.strip().capitalize())
    except EOFError:
        break

for line in lines:
    processed_line = ' '.join(line.split())
    processed_line = processed_line.replace(' .', '.').replace(' !', '!').replace(' ?', '?')
    if not processed_line.endswith(('.', '!', '?')):
        processed_line += '.'

    print(processed_line)