function f1: var_a{
	return var_a == 0 || var_a > 0;
}

var_b = [];

while var_i < input.length{
	var_b.push(f1(input[var_i++]));
}
return var_b;