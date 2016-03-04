function f1: var_a{
	var_b = 0;
	foreach var_c in var_a{
		var_b = var_b + var_c;
	}
	return var_b;
}

var_m = f1(input[0]);

while var_i < input.length{
	if f1(input[var_i]) < var_m{
		var_m = f1(input[var_i]);
		var_j = var_i;
	}
	var_i++;
}
return input[var_j];