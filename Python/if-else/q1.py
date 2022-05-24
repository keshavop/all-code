# Write a password guessing program to keep track of how many times the user has entered the password wrong. If it is more than 3 times, print "You have been denied access." and terminate the program. If the password is correct, print "You have successfully logged in." and terminate the program.

password = "qwerty"

count = 3
for i in range(count):
    inputPass=input()
    if inputPass ==password:
        print("Access Granted")
        break
    else:
        print("Access Denied")
