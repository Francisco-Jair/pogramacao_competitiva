a = gets.to_i

i = 0

while (a > i)

	b = gets.to_i

	if (b % 2 == 0)

		if b == 0
		 puts "NULL"
		else

			if b > 0
				puts "EVEN POSITIVE"
			else
				puts "EVEN NEGATIVE"
			end
		end
	else
		#aqui o numero e impar
		if b > 0
			puts "ODD POSITIVE"
		else
			puts "ODD NEGATIVE"
		end
	end

	i = i + 1
end
