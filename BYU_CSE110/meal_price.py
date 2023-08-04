                #creativity
'''# i added the calculation of the user's total monthly and yearly expenses, if he/she makes the purchase everyday.'''
                
                # the input 
C_M= float(input('what is the price of a childs meal? '))
A_M= float(input('what is the price an adult meal? '))
n_C= int(input('what is the number of children? '))
n_A= int(input('what is the number of adult? '))
S_T_R= float(input('what is the sales tax rate? '))
                # calculating the sub total
T_A= n_C * C_M
T_C= n_A * A_M
Sub_T=  T_A + T_C
sd= '${:,.2f}'.format(Sub_T)  #to display in dollar sign * '${:,.2f}'*
                # output
print(f'\nsubtotal:',sd) #sub total
sales_t= Sub_T * S_T_R     
rate= sales_t / 100
rd='${:,.2f}'.format(rate)
print(f'sales tax:',rd)  # sales tax
T_P= Sub_T + rate
tpd='${:,.2f}'.format(T_P)
print('total price',tpd)   #total price
                # payment amount
P_A= float(input('\nhow much are you paying? '))
change= P_A - T_P
change_d='${:,.2f}'.format(change)
print('your change is',change_d)   #change  

                #creativity
mon=T_P * 30 
mon_D='${:,.2f}'.format(mon)
year=mon * 12
year_D='${:,.2f}'.format(year)
print ('\nif you make this purchase everyday your expenditure:')
print('monthly:',mon_D)
print('yearly:',year_D)
