#There are 2 ways for scraping the website
# 1. USE API
# 2. HTML SCRAPING USING SOME TOOL LIKE BS4

#Step: Install all the required packages
#pip install requests
#pip install bs4
#pip install html5lib

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
# print(soup.prettify)
# prettifies the content

#step 3: HTML tree traversal
title = soup.title
# print(title.string)

soup.find_all("a")
# print(soup.find_all)

meta = soup.find_all("meta")
# print(meta[0])
# print(meta[1])
# print(meta[2])
# print(meta[3])

file = open("Try.csv","w")
csv_writer = csv.writer(file)

