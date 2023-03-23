alpha = float(input())


h = alpha//30
m = alpha % 30 * 2
s = alpha % 0.5*120

print(int(h), int(m), int(s))