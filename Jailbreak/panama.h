var_b = "";
var_c = "";

foreach var_a in input{
	var_b = var_b + var_a;
}

var_i = input.length - 1;
while var_i != -1{
	var_c = var_c + input[var_i--];
}

return var_b == var_c;