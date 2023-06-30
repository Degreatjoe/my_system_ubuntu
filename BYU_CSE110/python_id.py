#i went an extra mile to make my id card print in 
#yellow colour.

#the main information
print('\nenter the following informations: ')
First=input('\nfirstname: ')
Last=input('last_name: ')
email=input('email_address: ')
tell=input('phone_number: ')
job=input('job_tittle: ')
ID=input('card_number: ')

#the remaining iformation
hair=input('hair_colour: ')
eye=input('eye_colour: ')
month=input('starting_month: ')
training=input('recieved any additional training? ')

#the id print
print()
print()
print('\n\033[1;33;40m \n ')
print('      '' ID CARD :')
print('-------------------------------')
print(f'{Last.upper()}, {First.capitalize()}')
print(job.title())
print(f'ID: {ID}')
print()
print(F'{email.lower()}')
print(tell)
print()

#the additional information.
print(f"Hair: {hair:15} Eyes: {eye}")
print(f"Month: {month:14} Training: {training}")
print("----------------------------------------")


