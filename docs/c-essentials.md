# c-essentials.h

## Included Libearys

- stdio.h
- stdlib.h
- stdbool.h
- string.h

## hinstall(char *mode, char *path, char *name)

### char *mode

two compatable modes, curl, and file

#### file

- char *path is the path to the header library
- char *name is what the file will be called in the include_path var | Example: festtest.h - /usr/include/festtest.h

#### curl

- char *path is the url to the header library
- char *name is what the file will be called in the include_path var | Example: festtest.h - /usr/include/festtest.h