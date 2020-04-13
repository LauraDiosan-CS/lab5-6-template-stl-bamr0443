#pragma once
#include <fstream>
#include <string>
#include <list>
#include "algorithm"
#include "iterator"
#include "Repo.h"

//#include <iostream>
using namespace std;
template<class Elem>
class RepoFile : public Repo<Elem> {
private:
	char* fileNameIn ;
	char* fileNameOut ;
public:
RepoFile();
RepoFile(const char* fileNameIn,const char* fileNameOut);		
~RepoFile();
void setFileNameIn(const char* fileNameIn);
void setFileNameOut(const char* fileNameIOut);
void loadFromFile();
void saveToFile();
};



  template<class Elem>
  RepoFile<Elem>::RepoFile():Repo<Elem>()
 {
      this->fileNameIn = NULL;
      this->fileNameOut = NULL;
  }
 

 template<class Elem>
  RepoFile<Elem>::RepoFile(const char* fileNameIn,const char* fileNameOut):Repo<Elem>()
 {
      this->fileNameIn = new char[strlen(fileNameIn) + 1];
      strcpy_s(this->fileNameIn, strlen(fileNameIn) + 1, fileNameIn);
      this->fileNameOut = new char[strlen(fileNameOut) + 1];
      strcpy_s(this->fileNameOut, strlen(fileNameOut) + 1, fileNameOut);
      this->loadFromFile();

 }

 template<class Elem>
  RepoFile<Elem>::~RepoFile()
 {
      if (this->fileNameIn != NULL) {
          delete[] this->fileNameIn;
          this->fileNameIn = NULL;
      }
      if (this->fileNameOut != NULL) {
          delete[] this->fileNameOut;
          this->fileNameOut = NULL;
      }
  }

  template<class Elem>
   void RepoFile<Elem>::setFileNameIn(const char* fileNameIn)
  {
       if (this->fileNameIn != NULL)
       {
           delete[]this->fileNameIn;
       }
       this->fileNameIn = new char[strlen(fileNameIn) + 1];
       strcpy_s(this->fileNameIn, strlen(fileNameIn) + 1, fileNameIn);
  }

  template<class Elem>
   void RepoFile<Elem>::setFileNameOut(const char* fileNameIOut)
  {
       if (this->fileNameOut != NULL)
       {
           delete[]this->fileNameOut;
       }
       this->fileNameOut = new char[strlen(fileNameOut) + 1];
       strcpy_s(this->fileNameOut, strlen(fileNameOut) + 1, fileNameOut);

  }
 

  template<class Elem>
  void RepoFile<Elem>::loadFromFile()
  {
      if (this->fileNameIn != NULL) {
          ifstream f(this->fileNameIn);
          Elem e;
          while (f >> e) {
              this->addElem(e);
          }
          f.close();

      }

  }

  template<class Elem>
  void RepoFile<Elem>::saveToFile()
  {
      
      if (this->fileNameOut != NULL)
      {
          ofstream f(this->fileNameOut);
          for (size_t i = 0; i < this->elemente.size(); i++)
          {
              f << this->get(i) << endl;
          }
          f.close();
      }
      

    
      
  }
