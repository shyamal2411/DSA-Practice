import csv
dataList = [[1, "Viral", "MNIT Jaipur", "Oracle", 1234567890],
            [2, "Chomu", "Bahaudin", "21 din me paisa double", 9876543210]]

headers = ["ID", "Name", "College", "Company", "MobileNumber"]
file = open("Try.csv","w")
csv_writer = csv.writer(file)

csv_writer.writerow(headers)

for data in dataList:
    csv_writer.writerow(data)
    # print(data)
file.close()

# print("Data written successfully")