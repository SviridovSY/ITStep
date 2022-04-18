#include "book.h"

book::book() : author(nullptr), name(nullptr), publishing_house(nullptr)
{
	author = nullptr;
	name = nullptr;
	publishing_house = nullptr;
	year = 0;
	number_pages = 0;
}

book::~book()
{
	if (author)
	{
		delete[] author;
	}
	if (name)
	{
		delete[] name;
	}
	if (publishing_house)
	{
		delete[] publishing_house;
	}
}

book::book(const book& tmp)
{
	size_t size = strlen(tmp.author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, tmp.author);

	size = strlen(tmp.name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, tmp.name);

	size = strlen(tmp.publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, tmp.publishing_house);

	this->year = tmp.year;
	this->number_pages = tmp.number_pages;
}

book::book(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages)
{
	size_t size = strlen(author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, author);

	size = strlen(name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, name);

	size = strlen(publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, publishing_house);

	this->year = year;
	this->number_pages = number_pages;

}

book::book(unsigned short number_pages) : book()
{
	this->number_pages = number_pages;
}

void book::init(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages)
{
	set_author(author);
	set_name(name);
	set_publishing_house(publishing_house);
	set_year(year);
	set_number_pages(number_pages);
}

void book::show_by_author(const char* author)
{
	author = get_author();
}

void book::show_by_publishing_house(const char* publishing_house)
{
	publishing_house = get_publishing_house();
}

void book::set_author(const char* author)
{
	size_t size = strlen(author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, author);
}

void book::set_name(const char* name)
{
	size_t size = strlen(name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, name);
}

void book::set_publishing_house(const char* publishing_house)
{
	size_t size = strlen(publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, publishing_house);
}

void book::set_year(unsigned short year)
{
	this->year = year;
}

void book::set_number_pages(unsigned short number_pages)
{
	this->number_pages = number_pages;
}

const char* book::get_author() const
{
	return this->author;
}

const char* book::get_name() const
{
	return this->name;
}

const char* book::get_publishing_house() const
{
	return this->publishing_house;
}
