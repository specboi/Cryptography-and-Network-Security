import hashlib
Hash=hashlib.sha256("secret message".encode()).hexdigest()
print(Hash)