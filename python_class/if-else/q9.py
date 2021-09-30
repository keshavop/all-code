# Write a Python program to check whether an alphabet is a vowel or consonant.

letter = input()
if letter.isalpha() == False:
    print("Invalid")
elif letter == "A" or letter == "E" or letter == "I" or letter == "O" or letter == "U" or letter == "a" or letter == "e" or letter == "i" or letter == "o" or letter == "u":
    print("It's a vowel")
else:
    print("It's a consonent")
