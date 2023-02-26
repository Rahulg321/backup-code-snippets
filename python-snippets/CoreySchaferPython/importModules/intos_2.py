"""this tutorial is specfically used 
if we want to import a file not in the same directory"""
# whenever we import a module it checks multiple locations
# the location it checks is a list called sys.path
# there are a couple of approaches we can take here
# we can manually add that file to our sys.path or directory

# we can also add it to our python path


import sys
sys.path.append('C:/Users/Lenovo/OneDrive/Desktop/excel')
print(sys.path)
courses = ['History', 'Math', 'Physics', 'CompSci']
