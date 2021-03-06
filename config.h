#ifndef _CONFIG__H
#define _CONFIG__H

struct config
{
   int reconstruct_symbols;   // rebuild the symbol table
   int verbose;               // print extra information at runtime
	bool symbol_per_file;		// write one symbol in each file - this is really useful
										// when planning to make modifications before relinking.
	linked_list *ignore_list;	// List of symbols to ignore
};

// make the config globally accessible
extern struct config config;

#endif // _CONFIG__H
