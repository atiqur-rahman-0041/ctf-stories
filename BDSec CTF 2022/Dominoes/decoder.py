def reverse_y(c):
  a = list(c)
  a.reverse()
  for i in range(1,len(a)):
    b = a[i]
    for j in range(0, i):
      b = chr(ord(b) ^ ord(a[j]))		
    a[i] = b
  return "".join(a)[::-1]

encrypted_flag = open("./Attachments/encrypted.txt", "r").read()
print(reverse_y(encrypted_flag))