#ifndef INPUT_H
#define	INPUT_H

bool* validateInput(char *input);
void append(char *string, char c);
void addString(char **commandList, int currentCommand, char *rawInput, int startIndex, int endIndex);
char ** splitInput(char *input, bool ISDEBUG);
bool validateStringAmnt(char ** strings);
bool handleError(bool* isValid);
void trimInput(char *rawInput, bool ISDEBUG);
void printCommands(char ***commands);
bool isToken(char command);
void addCommand(char ***commandList, char **argList, int pos, bool ISDEBUG);
char *** splitIntoCommands(char **strings, bool ISDEBUG);
bool areCommandsValid(char **commands);

#endif	/* INPUT_H */

