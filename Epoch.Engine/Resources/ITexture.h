#pragma once

namespace Epoch {

    class IImage;

    class ITexture {
    public:
        virtual ~ITexture() {}
        virtual const char* GetName() const = 0;

        virtual IImage* GetImage() = 0;
    };
}