from sys import argv

script, username = argv
prompt = '> '

print 'Hello ' + (username) + ', Do you know number of months in a year?'
num = raw_input(prompt)
print """
thank you for
proving you are
human being. your
answer was %r .
""" % (num)
