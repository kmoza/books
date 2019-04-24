number = 23
running = True

while running:
    guess = int(input('Enter an integer'))
    if guess == number:
        print 'Congratulations you guessed it.'
        running = False
    elif guess < number:
        print 'No its little higher'
    else:
        print 'No its little lower'
else:
    print 'The loop is over'

print 'Done'
