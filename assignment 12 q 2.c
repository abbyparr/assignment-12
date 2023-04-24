#open the file
the_file = open('CompleteData.csv')
print(the_file)

#compute both the most popular departing/arriving cities
read = the_file.read('H')
read2 = the_file.read('I')

#allow the user to specify the number of popular cities they would like know about. 
cities = input('what popular cities would you like to know about?')
print(cities)

#export the resulting number of cities as 2 separate tsv files...
#with a header including at the city, the state...
#and the number of either flights going out/into that city

file_1 = open('DFW.tsv')
print(file_1)

file_2 = open('LAX.tsv')
print(file_2)

#close the file
the_file.close()
