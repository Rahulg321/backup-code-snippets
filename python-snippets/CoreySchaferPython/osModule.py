"""underlying operating system functionality"""

import os
from datetime import datetime
# we can navigate the file system
# get file information
# change the environment variables


# shows us all the attributes and methods that we have access to in this module

# print(dir(os))
# cwd gives us the current working directory
# print(os.getcwd())

# chdir stands for change directory
# os.chdir('/Users/Lenovo/OneDrive/Desktop/')
# print(os.getcwd())


# if we want to see all the files and folders that are on our desktop
# listdir

print(os.listdir('/Users/Lenovo/OneDrive/Desktop/'))


# if we want to make a folder on the desktop from here
# os.mkdir('OS-DEMO')
# makedirs helps us to create a directory that is a few levels deep
# as opposed to make dir
# os.makedirs('OS-DEMO/SUB-DIR1')


# deleting folders
# rmdirs and removedirs similar to mkdir and makedirs
# os.removedirs('OS-DEMO/SUB-DIR1')

# renaming a file or folder
# os.rename('excel', 'Data')


# if we want to print out all the information regarding our file
# print(os.stat('data'))
# print(os.stat('data').st_size)
# mod_time = os.stat('data').st_mtime


# st_mtime=1662389089 this is the modification time
# by using dateTime module we can use it in actually time Format

"""two ways of doing date time thingy
   first we can save it in a variable and then use the method
   or we can directly add the number
"""

# print(datetime.fromtimestamp(4587415789))  #we can write any random 10 digit number
# print(datetime.fromtimestamp(mod_time))

"""
if we want to see the entire directory tree and files withIn the DESKTOP
"""

# this walk returns a three value tuple
# thatsy we yse this in the for loop

# if we had a webApplication and we want to keep a check directory structure
# for dirpath, dirnames, filenames in os.walk('/Users/Lenovo/OneDrive/Desktop/'):
#     print(f'CURRENT PATH: {dirpath}')
#     print(f'DIRECTORIES: {dirnames}')
#     print(f'FILES: {filenames}')
#     print()


"""
 What are environmental variables in computer?
Environment variables store data that is used by the operating system and other programs. 
For example, the WINDIR environment variable 
 """
# we can a
