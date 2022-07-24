import cryptocode

encrypted_message = open("./Attachments/cipher.txt", "r").read()
decrypted_message = cryptocode.decrypt(encrypted_message, password="BDSEC")

print(decrypted_message)