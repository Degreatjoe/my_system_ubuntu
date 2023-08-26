

print("welcome to joseph's shoppingh mall\n")
print ('please choose an option\n')
options= ['add item', 'remove item', 'view cart', 'compute total', 'quit']
items= []
prices= []


for i, menu in enumerate(options) :
    i += 1
    print(f'{i}. {menu}')
print()
choice= ''
while choice != 5 :
    choice= float(input('enter a number: '))
    if choice == 1 :
        item= input('enter the item you want to add: ')
        items.append(item)
        price= input(f'enter the price of {item}: ')
        prices.append(price)
        print (f'{item} has been added to cart.')

    elif choice == 2:
        print ('enter item you wish to remone: ')

    elif choice == 3 :
        print ('items in your cart are:')
        for i in range(len(items)) :
            cart= items[i]
            cost= prices[i]
            i += 1
            print(f'{i}.  {cart} -- #{cost.2f} ')
        print()
