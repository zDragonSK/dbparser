/*
  DBParser Header
  By: zDragonSK
 */
#ifndef _DBPARSER_H
#define _DBPARSER_H

/* Book structure */
typedef struct {
  char title[100];
  char tag[5][100];
  char author[100];
  char url[100];
  char path[100];
}book;

/* Tokeniza Schema */
book tokenize (const char unsigned *filename);
/* Parser */
int parser (book schema);
/* Generate SQL */
int genSQL (book schema);
#endif
