import re, sys

text = sys.stdin.read() 
sentences = re.split(r'[.!?]', text)
for s in sentences:
    s = s.strip()
    if s:
        words = s.lower().split()
        words[0] = words[0].title()
        print(*words)
