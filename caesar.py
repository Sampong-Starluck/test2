# CAesar Cipher

import pyperclip

print("encrypt/decypt ")
mode = input("mode = ") 

# The string that need to be encrypts/decrypts
message =  input("Input the message: ") # "Together we're happy as we can be"

# The encrypts/decrypts key: 
key = int(input("Input the key: ")) # 7

#whether the program encrypts or decrypts:

# set to either encrypts or decrypts. mode = 'encrypt'

# every posible symbol that can be encrypted: 
symbols = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 !?.'#`~@#$%^&*()_+-=[]{}|;:<>,/" 

# store the encrypted / decrypts form of the message: 
translate = ''

for symbol in message:
    # Note: only symbol in the symbols string can be encrypts / decrypts
    if symbol in symbols:
        symbolIndex = symbols.find(symbol)

        #Perform encryption/decryption
        if mode == 'encrypt':
            translateIndex = symbolIndex + key
        elif mode == 'decrypt':
            translateIndex = symbolIndex - key

        # Handle wraparound, if needed: 
        if translateIndex >= len(symbols):
            translateIndex = translateIndex - len(symbols)
        elif translateIndex < 0:
            translateIndex = translateIndex + len(symbols)
        
        translate = translate + symbols[translateIndex]
    
    else:
        # Append the symbol without encrypting/decrypting:
        translate = translate + symbols

# output the translated string:
print(translate)
pyperclip.copy(translate)