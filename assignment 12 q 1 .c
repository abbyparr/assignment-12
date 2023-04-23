#open the file
the_file = open('Stations.csv', 'r')
  print(the_file)

#map the code (IATA)
#get B column only
csvrow = [row[2] for row in reader]
char = the_file.read('csvrow')
  print(char)

#close the file
the_file.close()
