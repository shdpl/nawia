package net.nawia.validators;

import javax.validation.ConstraintValidator;
import javax.validation.ConstraintValidatorContext;

public class ExampleValidator implements ConstraintValidator<Example, String> {

	@Override
	public void initialize(Example arg0) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public boolean isValid(String arg0, ConstraintValidatorContext arg1) {
		// TODO Auto-generated method stub
		return false;
	}

}
