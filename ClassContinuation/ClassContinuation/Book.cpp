#include "Book.h"

Book::Book(const std::string newAuthor, const std::string newTitle, const std::string newPublishingHouse, const int newYearPublishing, const int newNumberPages) :author(newAuthor), title(newTitle), publishingHouse(newPublishingHouse),
yearPublishing(newYearPublishing), numberPages(newNumberPages) {};


std::string Book::getauthor() const
{
	return author;
}

std::string Book::gettitle() const
{
	return title;
}

std::string Book::getpublishingHouse() const
{
	return publishingHouse;
}

int Book::getyearPublishing() const
{
	return yearPublishing;
}

int Book::getnumberPages() const
{
	return numberPages;
}


void Book::setauthor(const std::string newAuthor)
{
	author = newAuthor;
}

void Book::settitle(const std::string newTitle)
{
	title = newTitle;
}

void Book::setpublishingHouse(const std::string newPublishingHouse)
{
	publishingHouse = newPublishingHouse;
}

void Book::setyearPublishing(const int newYearPublishing)
{
	publishingHouse = newYearPublishing;
}

void Book::setnumberPages(const int newNumberPages)
{
	numberPages = newNumberPages;
}


void Book::conclusion()
{
	std::cout << getauthor() << "," << gettitle() << "," <<  getpublishingHouse() << "," << getyearPublishing() << "," << getnumberPages() << std::endl;
}


Book::~Book()
{
}
