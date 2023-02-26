# importing myModule file from the directory
"""If we want to import the full module"""
# import my_module as mm
# courses = ['History', 'Math', 'Physics', 'CompSci']

# index = mm.find_index(courses, 'Physics')
# print(index)


"""if we just want to import a specific method from a module"""
# from my_module import *
from my_module import find_index, test
import sys
courses = ['History', 'Math', 'Physics', 'CompSci']

index = find_index(courses, 'Math')
# print(index)
# print(test)
print(sys.path)
# sys.path is basically all the directories from which python checks
# and import the reqd modules


"""If we want to import everything from a module"""
# from my_module import *
