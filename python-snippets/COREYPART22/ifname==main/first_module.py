# print(f'first modules name is :- {__name__}')

print('this will always be run')


def func1():
    print('hello world')


def main():
    # print(f'first modules name is :- {__name__}')
    print('first modules main method')




# Basically it check that
# is this file being run directly by python or is it being imported
if __name__ == '__main__':
    main()
