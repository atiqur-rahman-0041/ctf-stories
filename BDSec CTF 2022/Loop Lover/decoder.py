def f(t):
    c = list(t)
    for i in range(len(t)):
        for j in range(i, len(t) - 1):
            for k in range(j, len(t) - 2):
                c[k], c[k+1] = c[k+1], c[k]
                
    return c

b = open("./Attachments/ciphertext.txt", "r").read()
a = f(list(range(len(b))))

c = {}
for i in range(len(a)):
  c[a[i]] = b[i]

d = ""
for i in range(32):
  d += c[i]

print(d)