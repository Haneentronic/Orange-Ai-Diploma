print("hello from the terminal")
from bs4 import BeautifulSoup

with open ('simple.html') as html_file:
    soup = BeautifulSoup(html_file, 'lxml') # parser, #parsing


print(soup)