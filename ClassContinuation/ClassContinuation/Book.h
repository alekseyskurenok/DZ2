#pragma once
#include <string>
#include <iostream>

class Book
{
	std::string author;
	std::string title;
	std::string publishingHouse;
	int yearPublishing;
	int numberPages;
public:
	Book(const std::string newAuthor, const std::string newTitle, const std::string newPublishingHouse, const int newYearPublishing, const int newNumberPages);
	std::string getauthor() const;
	std::string gettitle() const;
	std::string getpublishingHouse() const;
	int getyearPublishing() const;
	int getnumberPages() const;

	void setauthor(const std::string);
	void settitle(const std::string);
	void setpublishingHouse(const std::string);
	void setyearPublishing(const int);
	void setnumberPages(const int);

	void conclusion();
	~Book();
};

