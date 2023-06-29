#include <exception>
#include <string>
#ifndef EXCEPTION_H
#define EXCEPTION_H

class Exception : public std::exception
{
	public:
		std::string what(){ return message;}
		Exception()=default;
		explicit Exception(std::string message);
		Exception(const Exception& other)=default;
		~Exception()=default;
	protected:
		std::string message;
};

class DeckFileNotFound : public Exception
{
	public:
	explicit DeckFileNotFound(){ message = "Deck File Error: File not found"; };
};
class DeckFileFormatError : public Exception
{
	public:
	explicit DeckFileFormatError(int lineNum): lineNum(lineNum) { message = "Deck File Error: File format error in line "+ std::to_string(lineNum); };

	private:
		int lineNum;
};

class DeckFileInvalidSize : public Exception
{
	public:
	explicit DeckFileInvalidSize(){ message = "Deck File Error: Deck size is invalid"; };
};
 class InvalidTeamSize : public Exception
 {
 	public:
 	explicit InvalidTeamSize(){ message = "Invalid team size"; };
 };

 class InvalidPlayerName : public Exception
 {
 	public:
 	explicit InvalidPlayerName(){ message = "Invalid player name"; };
 };

 class InvalidPlayerClass : public Exception
 {
 	public:
 	explicit InvalidPlayerClass(){ message = "Invalid player class"; };
 };

 class InvalidInput : public Exception //
 {
 	public:
 	explicit InvalidInput(){ message = "Invalid input"; };
 };
 
#endif //EXCEPTION_H