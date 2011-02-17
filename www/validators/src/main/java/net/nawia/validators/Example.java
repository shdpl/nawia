package net.nawia.validators;

import java.lang.annotation.Documented;
import java.lang.annotation.Retention;
import java.lang.annotation.Target;

import javax.validation.Constraint;
import javax.validation.Payload;

import static java.lang.annotation.ElementType.*;
import static java.lang.annotation.RetentionPolicy.*;

@Target({METHOD, FIELD})
@Retention(RUNTIME)
@Documented
@Constraint(validatedBy=ExampleValidator.class)
public @interface Example {
	String message() default "{net.nawia.validators.Example.message}";
	Class[] groups() default{};
	Class<? extends Payload>[] payload() default {};
}
