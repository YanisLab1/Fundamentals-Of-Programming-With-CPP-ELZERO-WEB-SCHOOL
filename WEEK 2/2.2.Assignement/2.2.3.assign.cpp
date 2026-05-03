/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not Valid ] => Reason: you cannot start with number
  __name      [ Valid ] => Bad Practice: it starts with underscore
  name@name   [ Not Valid ] => Reason: you cannot put special character in variable name
  name10name  [ Valid ] => Reason: you cannot put number within variable name
  name!name   [ not valid ] => Reason: you cannot put special character in variable name
  first_NAME  [ Valid ] => Bad Practice: not Screaming Snake Case
  first_name  [ Valid ] => Best Pratice: Snake Case
  firstName   [ Valid ] => Best Practice: Camel Case
  first name  [ not valid ] => Reason: space within variable name
  fn          [ valid ] => Bad Practice: name of variable not helpful
  public      [ not valid ] => Reason: it contains reserved name
  Public      [ valid ] => bad practice name of vaiable not helpful
*/