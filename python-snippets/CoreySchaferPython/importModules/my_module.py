print('Imported my Module....')
print('we have just imported a module ')

test = 'test String'


def find_index(to_search, target):
    """Finds the index of a value in a sequence"""
    for i, value in enumerate(to_search):
        if value == target:
            return i
    return -1
    # else if the value is not found
