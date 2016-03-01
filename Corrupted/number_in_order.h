var_a = "";
var_b = "";

foreach var_c in input{
	var_a = var_a + var_c;
}

input.sort;

foreach var_c in input{
	var_b = var_b + var_c;
}

return var_a == var_b;