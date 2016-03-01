if input != 2 && mod(input,2) == 0 || input == 1{
	return false;
}else{
	var_a = 0;
	var_i = 1;
	while var_i < input{
		if mod(input, var_i++) == 0{
			var_a++;
		}
	}
}
return var_a < 3;