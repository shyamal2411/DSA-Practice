import requests
from bs4 import BeautifulSoup

#LIBRARIES IMPORTED FOR THIS PROGRAM
# pip install requests 
# pip install bs4
# pip install html5lib

#taking user input
city = str(input("Enter the city name: "))

#creating url
url = "https://www.google.com/search?q="+"weather"+city

#requests instance
html = requests.get(url).content

#getting the raw data
soup = BeautifulSoup(html,'html.parser')

#getting the temperature
temp = soup.find('div', attrs={'class': 'BNeawe i8p4i AP7Wnd'})

#getting the time and sky description
time_syDesc = soup.find('div', attrs={'class': 'BNeawe tAd8D AP7Wnd'}).text

#formatting the data
data = time_syDesc.split('\n')
time = data[0]
sky = data[1]

#list which is havind all the tags with particular class names
listdiv = soup.findAll('div', attrs={'class': 'BNeawe s3v9rd AP7Wnd'})

#the data we need is available at index 5
strd = listdiv[5].text

#formatting the string
pos = strd.find('Wind')
otherData = strd[pos:]

#printing the data to get the output
print("Termperature:", temp)
print("Time:", time)
print("Sky temperature:", sky)
