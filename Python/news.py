import requests
from bs4 import BeautifulSoup

url = "https://shyamal2411.github.io/TypeTest/"

#step 1: Get the html
r = requests.get(url)
htmlContent = r.content
# print(htmlContent) 
# PRINTS THE WHOLE HTML CONTENT TO TERMINAL

#step 2: Parse the html
soup = BeautifulSoup(htmlContent, 'html.parser')

title = soup.title.string
print('TITLE:', title)

meta = soup.find_all('meta')
print(meta[1])

