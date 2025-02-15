#ifndef TEXTURE_H
#define TEXTURE_H

#include <iostream>
#include "u_types.h"

class Texture
{
    public:
		Texture();
        Texture(u_int id, int width, int height, int nrChannels);
		Texture(const Texture &other);

        ~Texture();

        unsigned int id;
        int width;
        int height;
        int nrChannels;
};

#endif