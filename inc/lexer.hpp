enum class TokenType {
  SmallName,
  CapitalName,
  Digit,
  Symbol,
  Eof
};

class BadGetterException : std::domain_error {
  public:
    BadGetterException(std::string const & cause);
};

class Token {
  public:
    Token(TokenType type, std::string const & literal);
    TokenType type() const;
    std::string representation() const;
    std::string get_as_name() const;
    int get_as_integer() const;
  private:
    TokenType token_type;
    std::string literal;
};

class TokenStream {
  public:
    TokenStream(std::vector<Token> const & tokens);
  private:
    std::vector<Token> stream;
};