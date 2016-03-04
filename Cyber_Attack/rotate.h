while var_i < input.length - 1{
	var_a = input[var_i];
	input[var_i] = input[var_i + 1];
	input[var_i + 1] = var_a;
	var_i++;
}
return input;