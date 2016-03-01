while var_i < input.lenght{
	if input[var_i] != var_i {
		input.insert(var_i, var_i);
	}
	var_i++;
}
return input;