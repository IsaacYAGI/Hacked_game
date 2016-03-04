var_a = "";
var_b = false;

while !var_b {
	var_b = true;
	var_i = 0;
	while var_i < input.length - 1{		
		if input[var_i] > input[var_i + 1]{
			var_a = input[var_i + 1];
			input[var_i + 1] = input[var_i];
			input[var_i] = var_a;
			var_b = false;
		}
		var_i++;
	}
}
return input;