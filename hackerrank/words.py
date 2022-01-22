import re
file = open("/usr/share/dict/words", "r")
words = re.sub("[^\w]", " ",  file.read()).split()

def is_word(word):
    return word.lower() in words

print(is_word("tarts")) ## Returns true
print(is_word("jwiefjiojrfiorj")) ## Returns False
