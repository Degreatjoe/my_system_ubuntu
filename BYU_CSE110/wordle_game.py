''''                 w04 project
name: GREAT JOSERPH
class; CES110
Topic: THE WORDLE GAME
time spent: 2 WEEKS                         
creativity : TO SHOW CREATIVITY FOR THIS PROJECT I MADE THE RESPONSE SHOW IN DIFFERENT COLOURS;
 * IF THE LENGTH OF THE GUESS IS NOT THE SAME "IT WOULD PRINT IN RED"
  * IF THE LENGTH IS THE SAME BUT GUESS IS WRONG "PRINT IN YELLOW"
   * IF GUESS CORRECT "PRINT IN GREEN".                                                                      
    '''
print('\nwelcome to the wordle game.')
secret= 'great'
s_length= len(secret)
print('your hint is: ',end="")
for letter in secret :
    print('_ ',end="")
print()
guess= input('what is your guess: ').lower()
g_count=1
while guess != secret :
    g_length= len(guess) 
    if s_length == g_length : 
        print('your hint is: ',end="") 
        for i in range(g_length):
            letter = guess[i]
            if letter == secret[i]:
                print (f'{letter.upper()} ',end="")
            elif letter in secret:
                print(f'{letter.lower()} ',end="")
            else:
                print('_ ',end="")
        print(f'\n\033[0;33m that is not correct, TRY AGAIN.  \033[m ')      #PRINT IN YELLOW
        guess= input('what is your guess: ').lower()
        g_count += 1
    else:
        print(f'\n \033[0;31m INVALID INPUT. THE SECRET WORD IS 5 LETTERS  \033[m ')    #PRINT IN RED
        guess= input('what is your guess: ').lower()
        g_count += 1
print(f'\033[0;32m HOORAY!! you got it.\nIt took you {g_count} gueses.\n \033[m')        #PRINT IN GREEN
