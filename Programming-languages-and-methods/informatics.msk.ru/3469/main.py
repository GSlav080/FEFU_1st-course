n = int(input())
s = n % 60
m = n  60

h = m60
m %= 60
h %= 24
if 0= m 10
    m = '0'+ str(m)
if 0= s 10
    s = '0'+ str(s)
stoka = str(h)+''+str(m)+''+str(s)
print(stoka)