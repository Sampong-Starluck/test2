# Ceasar Cipher Hacker

# message = "avnl1olyC4lGylCohww6ChzC4lCjhuCil"
message =  input("Input the message: ")
# symbols = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 !?.'"
symbols = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 !?.'#`~@#$%^&*()_+-=[]{}|;:<>,/" 

# Loop through every possible key: 
for key in range(len(symbols)):
    #It is important to set translate to blank string so that the 
    # previous iteration's value for translated is clear:
    translate = ''

    # The rest of the program is almost the same as the Ceasar program
    #Loop throug each symbol in message: 
    for symbol in message:
    # Note: only symbol in the symbols string can be encrypts / decrypts
        if symbol in symbols:
            symbolIndex = symbols.find(symbol)
            #Perform decryption:
            translateIndex = symbolIndex - key

            # Handle wraparound, if needed: 
            if translateIndex < 0:
                translateIndex = translateIndex + len(symbols)

            translate = translate + symbols[translateIndex]

        else:
            # Append the symbol without encrypting/decrypting:
            translate = translate + symbols

    # Display every possible decryption
    print('Key #%s: %s ' % (key,translate))

