#!/usr/bin/env python
#
# Mehmet Dursun INCe - 26.03.2013
#
# Random integer generater
#
import random
# 1k 
number_list = open("1k.lst", "w")
for i in xrange(1,1000):    
    number_list.write(str(random.randrange(0,9999999))+"\n")
number_list.close()
print "1k number generated"
# 10k 
number_list = open("10k.lst", "w")
for i in xrange(1,10000):    
    number_list.write(str(random.randrange(0,9999999))+"\n")
number_list.close()
print "10k number generated"
# 100k 
number_list = open("100k.lst", "w")
for i in xrange(1,100000):    
    number_list.write(str(random.randrange(0,9999999))+"\n")
number_list.close()
print "100k number generated"
# 1m
number_list = open("1m.lst", "w")
for i in xrange(1,1000000):    
    number_list.write(str(random.randrange(0,9999999))+"\n")
number_list.close()
print "1m number generated"
# 2m 
number_list = open("2m.lst", "w")
for i in xrange(1,2000000):    
    number_list.write(str(random.randrange(0,9999999))+"\n")
number_list.close()
print "2m number generated"
# 4m 
number_list = open("4m.lst", "w")
for i in xrange(1,4000000):    
    number_list.write(str(random.randrange(0,9999999))+"\n")
number_list.close()
print "4m number generated"
# 8m 
number_list = open("8m.lst", "w")
for i in xrange(1,8000000):    
    number_list.write(str(random.randrange(0,9999999))+"\n")
number_list.close()
print "8m number generated"
# 10m 
number_list = open("10m.lst", "w")
for i in xrange(1,10000000):    
    number_list.write(str(random.randrange(0,9999999))+"\n")
number_list.close()
print "10m number generated"
