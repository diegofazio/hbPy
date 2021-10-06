#
#  Sample.py -- hbPy simple call
#
#  Developed by Diego Fazio(2021)
#  Program to generate a random number between 0 and 9 and save output to file.out
#

import sys
import random

path = 'file.out'
sys.stdout = open(path, 'w')

print(random.randint(0,9))